# 달력 비파괴 런타임 오버라이드 — CalendarSubsystem

## 1. 문제 / 설계 목표

내러티브 게임에서 달력은 단순한 날짜 표가 아니라 "특별한 날", "이벤트 발동 조건", "배경음악
전환 트리거" 같은 메타가 붙은 구조다. 이 메타는 두 출처에서 온다:

- **시드(Seed)**: 디자이너가 에디터에서 미리 정의한 날짜별 고정 메타(공휴일, 이벤트 마커).
- **런타임 오버라이드**: 게임 진행 중 발생한 사건이 특정 날짜의 성격을 바꾸는 것
  (예: "Day 5가 특별한 날이 됐다", "공휴일 태그를 제거해 평일처럼 처리").

매번 `RebuildResolvedDays` 를 재실행하면 문제가 생긴다:

- 시드를 다시 빌드하는 비용이 크고, 오버라이드도 모두 초기화된다.
- "시드를 수정해 저장" 방식은 에디터 애셋을 런타임에 변경하는 것이라 SaveGame 복원이 불가능하다.

설계 목표:

- **비파괴**: 시드 `ResolvedDays` 배열은 불변. 오버라이드는 별도 맵에 보관하고 조회 시점에 병합.
- **자동 빈 항목 정리**: 오버라이드가 아무런 효과도 없는 상태가 되면 맵에서 자동 제거.
- **SaveGame 안전**: 런타임 오버라이드를 `FSoftObjectPath` 로 직렬화해 Schedule 애셋과 함께 복원.
- **단일 진입점**: 모든 변경이 `ApplyRuntimeOverride` 를 통과해 신호 발사가 누락되지 않는다.

## 2. 구현 구조

핵심 파일:

- `Source/Kaus/GameFeatures/Calendar/KausCalendarSubsystem.h/.cpp` — 메인 구현
- `Source/Kaus/GameFeatures/Calendar/KausCalendarTypes.h` — `FKausDayMeta`, `FKausDayRuntimeOverride`

내부 저장 레이아웃:

```
ResolvedDays: TArray<FKausDayMeta>       — 시드 + 자동 채움 결과 (불변)
RuntimeOverrides: TMap<FKausGameDate, FKausDayRuntimeOverride>
                                          — 런타임 오버라이드 (sparse)

조회: BuildEffectiveMeta(Date)
        └─ ResolvedDays[idx]  (사본)
            + ExclusionTags 제거
            + AdditionalTags 추가
            + DisplayName 오버라이드
```

### 2.1 시드 빌드 3단계 — `RebuildResolvedDays`

초기화 시 한 번 실행. 각 날짜에 순서대로 레이어를 쌓는다.

```cpp
void UKausCalendarSubsystem::RebuildResolvedDays()
{
    ResolvedDays.Reset();
    // ... (범위 계산, Total 확인)

    for (int32 i = 0; i < Total; ++i)
    {
        FKausDayMeta Meta;
        Meta.Date = Sys->AddDays(Start, i);
        Meta.WeekdayIndex = Sys->GetWeekdayIndex(Meta.Date, Start, Schedule->StartWeekdayIndex);

        // 1단계) 평일/주말 자동 부착
        if (Schedule->WeekendWeekdayIndices.Contains(Meta.WeekdayIndex))
            Meta.Tags.AddTag(KausCalendarTags::Calendar_Day_Weekend);
        else
            Meta.Tags.AddTag(KausCalendarTags::Calendar_Day_Weekday);

        // 2단계) 매년 반복 공휴일
        for (const FKausRecurringHoliday& H : Schedule->RecurringHolidays)
        {
            if (Meta.Date.Month == H.Month && Meta.Date.Day == H.Day)
            {
                Meta.Tags.AddTag(KausCalendarTags::Calendar_Day_Holiday);
                if (H.Marker.IsValid())
                    Meta.Tags.AddTag(H.Marker);
            }
        }

        // 3단계) 시드(SeedDayMetas) 병합 — 디자이너 정의 태그 + DisplayName
        if (const FKausDaySeed** SeedPP = SeedMap.Find(Meta.Date))
        {
            Meta.Tags.AppendTags((*SeedPP)->AdditionalTags);
            if (!(*SeedPP)->DisplayNameOverride.IsEmpty())
                Meta.DisplayName = (*SeedPP)->DisplayNameOverride;
        }

        ResolvedDays.Add(MoveTemp(Meta));
    }
}
```

### 2.2 조회 시 병합 — `BuildEffectiveMeta`

조회마다 시드 사본에 런타임 오버라이드를 적용해 반환한다. 시드는 변경되지 않는다.

```cpp
bool UKausCalendarSubsystem::BuildEffectiveMeta(const FKausGameDate& Date, FKausDayMeta& OutMeta) const
{
    const int32 Idx = DateToResolvedIndex(Date);
    if (Idx == INDEX_NONE) return false;

    OutMeta = ResolvedDays[Idx];  // 시드 사본 — 원본 불변

    if (const FKausDayRuntimeOverride* Override = RuntimeOverrides.Find(Date))
    {
        // 1) Exclusion 먼저: 태그 제거 후
        OutMeta.Tags.RemoveTags(Override->ExclusionTags);
        // 2) Additional: 태그 추가
        OutMeta.Tags.AppendTags(Override->AdditionalTags);
        // 3) DisplayName 오버라이드 (bHasDisplayNameOverride 플래그로 빈 이름 오버라이드도 표현)
        if (Override->bHasDisplayNameOverride)
            OutMeta.DisplayName = Override->DisplayNameOverride;
    }

    return true;
}
```

`RemoveTags` 를 `AppendTags` 보다 먼저 처리하는 이유: 같은 태그가 Exclusion 과 Additional에
동시에 있으면 "추가하려는 의도" 가 최종 결과여야 하기 때문이다.

### 2.3 단일 진입점 + 빈 항목 정리 — `ApplyRuntimeOverride`

모든 런타임 변경이 이 함수를 통과한다. `TFunctionRef` 로 실제 변경 로직을 인자로 받아
재사용성을 높이고, 변경 후 오버라이드가 비어 있으면 맵에서 제거한다.

```cpp
bool UKausCalendarSubsystem::ApplyRuntimeOverride(
    const FKausGameDate& Date,
    TFunctionRef<void(FKausDayRuntimeOverride&)> Mutator)
{
    if (!IsDateInRange(Date)) return false;

    FKausDayRuntimeOverride& Override = RuntimeOverrides.FindOrAdd(Date);
    Mutator(Override);

    // Mutator 호출 후 오버라이드가 효과 없는 상태면 맵에서 제거.
    if (Override.IsEmpty())
    {
        RuntimeOverrides.Remove(Date);
    }

    BroadcastMetaChanged(Date);
    return true;
}
```

```cpp
// AddRuntimeTag는 람다로 변경 로직만 전달.
bool UKausCalendarSubsystem::AddRuntimeTag(const FKausGameDate& Date, FGameplayTag Tag)
{
    check(IsInGameThread());
    if (!Tag.IsValid()) return false;

    return ApplyRuntimeOverride(Date, [Tag](FKausDayRuntimeOverride& O)
    {
        // Add/Remove 충돌 방지: ExclusionTags에 있었으면 자동 제거 후 추가.
        O.ExclusionTags.RemoveTag(Tag);
        O.AdditionalTags.AddTag(Tag);
    });
}
```

`TFunctionRef` 는 힙 할당 없는 non-owning 참조 — 람다 캡처가 가볍고 스택 바인딩으로 동작한다.

### 2.4 Add/Remove 충돌 자동 해결

같은 태그가 `AdditionalTags` 와 `ExclusionTags` 에 동시에 있으면 의도가 모순된다.
`AddRuntimeTag` 와 `RemoveRuntimeTag` 각각이 반대쪽에서 먼저 제거한 뒤 자기 쪽에 추가한다:

```cpp
// AddRuntimeTag 람다
O.ExclusionTags.RemoveTag(Tag);   // 제거 의도 취소
O.AdditionalTags.AddTag(Tag);      // 추가 의도 설정

// RemoveRuntimeTag 람다
O.AdditionalTags.RemoveTag(Tag);   // 추가 의도 취소
O.ExclusionTags.AddTag(Tag);       // 제거 의도 설정
```

### 2.5 SaveGame 직렬화 — `CaptureSaveData`

현재 `Schedule` 을 `FSoftObjectPath` 로 직렬화해 저장한다. `UObject*` 포인터를 저장하면
세션 간 주소가 바뀌므로 경로 기반으로 저장하고 복원 시 `TryLoad` 로 동기 로드한다.

```cpp
FKausCalendarSaveData UKausCalendarSubsystem::CaptureSaveData() const
{
    FKausCalendarSaveData Data;
    if (CurrentSchedule)
    {
        // UObject 포인터 대신 FSoftObjectPath로 직렬화 — 세션 간 주소 독립.
        Data.ScheduleAssetPath = FSoftObjectPath(CurrentSchedule);
    }
    Data.RuntimeOverrides = RuntimeOverrides;
    return Data;
}
```

복원 시 `InitializeWithSchedule` 로 시드를 재빌드한 다음, 저장된 `RuntimeOverrides` 를 복원하고
각 날짜에 `OnDayMetaChanged` 를 발사한다.

## 3. 핵심 설계 결정

**시드 배열을 불변으로 두고 조회 시점에 병합하는 이유.**
"시드를 직접 수정하는" 방식은 런타임 변경을 되돌리려면 Schedule 을 다시 로드해야 한다.
비파괴 설계는 `RuntimeOverrides` 맵만 지우면(`ClearRuntimeOverrides`) 시드 상태로 즉시 복원된다.
"Chapter 2로 건너뛰기" 같은 시간 점프에서 오버라이드를 선택적으로 보존하거나 초기화하는
것이 단순해진다.

**`TFunctionRef<void(FKausDayRuntimeOverride&)>` 패턴을 `ApplyRuntimeOverride` 에 쓴 이유.**
`AddRuntimeTag`, `RemoveRuntimeTag`, `SetRuntimeDisplayName` 세 함수는 "오버라이드 맵에서
항목을 찾아 → 변경 → 빈 항목 제거 → 신호 발사" 라는 같은 흐름을 공유한다. 변경 로직만
다르다. `TFunctionRef` 로 공통 흐름을 한 함수에 응집하면 새 변경 종류를 추가할 때
신호 발사나 빈 항목 정리를 빠뜨릴 수 없다.

**`ExclusionTags` 를 `AdditionalTags` 보다 먼저 처리하는 이유.**
`BuildEffectiveMeta` 에서 제거 후 추가 순서를 지키면, 같은 태그가 충돌하더라도 "추가 의도"
가 최종 결과다. 반대로 추가 먼저 하면 방금 추가한 태그가 즉시 제거되어 결과가 직관에 반한다.

**`FSoftObjectPath` 로 Schedule 을 직렬화하는 이유.**
`UObject*` 포인터는 세션 간에 의미가 없다. `TSoftObjectPtr` 나 `FSoftObjectPath` 로
에셋 경로를 저장하면 세이브 파일이 유효한 한 어느 세션에서든 동기 로드(`TryLoad`)로 복원할 수 있다.
이미 `KausAssetManager::GetAsset` 에서 채택한 규약과 동일하다.

## 4. 결과 / 얻은 것

- 시드 재빌드 없이 런타임 달력 메타를 추가/제거/복원 — 변경 비용이 `TMap` 삽입/삭제 수준.
- `ApplyRuntimeOverride` 단일 진입점으로 신호 발사가 모든 변경 경로에서 보장됨.
- Add/Remove 충돌이 자동 해결되어 디자이너가 순서를 신경 쓰지 않아도 됨.
- `ClearRuntimeOverrides(Date)` 한 번으로 특정 날짜를 시드 상태로 즉시 복원.
- `FSoftObjectPath` 직렬화로 SaveGame 복원이 단순 경로 로드 + 맵 복사로 완료됨.
- 13개 자동화 테스트가 Schedule 초기화, 메타 조회, 런타임 오버라이드 추가/제거/충돌, SaveData 캡처를 커버.

## 관련 파일

| 파일 | 역할 |
|------|------|
| `Calendar/KausCalendarSubsystem.h` | API 선언 + `ResolvedDays`/`RuntimeOverrides` 필드 |
| `Calendar/KausCalendarSubsystem.cpp` | `RebuildResolvedDays`, `BuildEffectiveMeta`, `ApplyRuntimeOverride` |
| `Calendar/KausCalendarTypes.h` | `FKausDayMeta`, `FKausDayRuntimeOverride`, `FKausDaySeed` |
| `Calendar/KausCalendarSaveData.h` | `FKausCalendarSaveData` — `FSoftObjectPath` + RuntimeOverrides |
| `Calendar/Tests/KausCalendarSubsystemTests.cpp` | 13개 통합 테스트 |
