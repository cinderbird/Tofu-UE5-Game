# Indicator 시스템 문서

> 대상 독자: 본 시스템을 사용해 UI를 만들 기획자, BP를 짤 기술기획, 기능을 확장할 프로그래머
> 위치: `Source/Kaus/UI/IndicatorSystem/`
> 원형: Epic Lyra의 Indicator 시스템을 기반으로 Kaus 프로젝트에 맞춰 수정·확장

---

## 1. 한 줄 요약

월드 좌표 위에 떠 있는 UI(머리 위 이름표, 상호작용 아이콘, 감정 표현 등)를 **HUD 위젯**으로 자연스럽게 표시하기 위한 시스템.
액터의 **본 소켓에 부착**되어 따라다니며, **on/off 토글**과 **여러 개 동시 표시**가 가능하다.

이 시스템 위에 두 가지 사용 방식이 있다.

| 방식 | 컴포넌트 | 용도 | 동시 표시 |
|------|---------|------|----------|
| 단일 인디케이터 | `KausIndicatorComponent` | 액터당 1개의 고정 indicator (예: 상호작용 아이콘) | 1개 |
| 감정 인디케이터 | `KausEmotionIndicatorComponent` | 캐릭터의 감정 표현 (DataAsset 기반) | 다수 |

---

## 2. 전체 구조

(첫 번째 도식 참조 — 시스템 전체 구조)

크게 네 영역으로 구성된다.

**월드 영역(액터 측)** — 액터에 붙는 컴포넌트들. 무엇을 어디에 표시할지 결정한다.
**컨트롤러 영역** — PlayerController에 붙는 매니저. 활성 indicator 목록을 보유하고 변경 사항을 브로드캐스트한다.
**HUD 영역(위젯 측)** — UMG의 `UIndicatorLayer`와 그 내부의 Slate 패널 `SActorCanvas`. 매니저의 이벤트를 듣고 실제 위젯을 화면에 그린다.
**데이터 자산** — 감정 indicator의 매핑 테이블(태그 → 위젯 + 소켓).

이 네 영역은 서로 직접 참조하지 않고, 매니저의 이벤트를 통해 느슨하게 연결된다. 즉 액터는 HUD에 대해 모르고, HUD는 어떤 액터가 있는지 모른다.

---

## 3. 핵심 클래스 레퍼런스

### 3.1 `UIndicatorDescriptor` (UObject)

**파일**: `IndicatorDescriptor.h/.cpp`
**역할**: 활성 indicator 1개의 모든 상태를 담는 데이터 객체. 위젯이 아니라 "어디에, 어떤 위젯을, 어떻게 표시할지"의 명세서이다.

#### 주요 변수

| 변수 | 타입 | 의미 |
|------|------|------|
| `Component` | `USceneComponent*` | 따라갈 대상 컴포넌트. 보통 캐릭터의 SkeletalMeshComponent. |
| `ComponentSocketName` | `FName` | 본/소켓 이름. `NAME_None`이면 컴포넌트 원점, 값이 있으면 `GetSocketTransform`으로 추적. |
| `IndicatorWidgetClass` | `TSoftClassPtr<UUserWidget>` | 표시할 위젯 클래스. Soft 참조라 비동기 로드된다. |
| `WorldPositionOffset` | `FVector` | 소켓 위치에 더할 월드 오프셋 (예: 머리 위 +20cm). |
| `ScreenSpaceOffset` | `FVector2D` | 투영 후 추가로 적용할 스크린 픽셀 오프셋. |
| `ProjectionMode` | `EActorCanvasProjectionMode` | 투영 방식. 기본값 `ComponentPoint`(소켓 포인트). 그 외 컴포넌트/액터 바운딩박스 기반 4종. |
| `HAlignment / VAlignment` | enum | 위젯 자체의 정렬 (스크린 좌표를 위젯 어느 지점에 맞출지). |
| `bClampToScreen` | bool | 화면 밖으로 나갈 때 가장자리에 붙일지 여부. |
| `bShowClampToScreenArrow` | bool | 클램프 시 화살표를 그릴지. |
| `Priority` | int32 | 같은 화면 위치에 겹칠 때의 정렬 우선순위(낮을수록 뒤). |
| `bVisible` | bool | 가시성 플래그. `SetDesiredVisibility`로 토글. |
| `bAutoRemoveWhenIndicatorComponentIsNull` | bool | 추적 대상 컴포넌트가 파괴되면 자동 정리. |
| `DataObject` | `UObject*` | 위젯이 BindIndicator로 받을 임의 데이터(보통 Owner 컴포넌트). |
| `ManagerPtr` | `TWeakObjectPtr<UKausIndicatorManagerComponent>` | 등록된 매니저 (역참조용). |

#### 주요 함수

```cpp
GetIsVisible()              // 컴포넌트 살아있고 bVisible 일 때만 true
SetDesiredVisibility(bool)  // 가시성 토글 (가장 가벼운 on/off 방법)
UnregisterIndicator()       // ManagerPtr->RemoveIndicator(this) 호출
```

**주의**: `SetIndicatorManagerComponent`는 `ensure(ManagerPtr.IsExplicitlyNull())`로 보호되어 있다. 한 번 매니저에 붙은 디스크립터는 재등록 불가. 재사용하려면 새 디스크립터를 만드는 것이 안전하다.

#### `FIndicatorProjection::Project`

월드 → 스크린 좌표 변환 함수. `SActorCanvas`가 매 프레임 호출한다.
처리 순서: 소켓 위치 조회 → `WorldPositionOffset` 합산 → 투영 모드별 픽셀 좌표 계산 → 카메라 뒤쪽일 때 화면 가장자리로 회전 → `ScreenSpaceOffset` 적용 → 깊이값과 함께 반환.

---

### 3.2 `UKausIndicatorManagerComponent` (UControllerComponent)

**파일**: `KausIndicatorManagerComponent.h/.cpp`
**역할**: PlayerController에 부착되어 활성 디스크립터 목록을 관리하는 허브. 등록·해제 시 이벤트로 SActorCanvas에 알린다.

#### 주요 변수

| 변수 | 의미 |
|------|------|
| `Indicators` | 현재 등록된 모든 디스크립터 배열 |
| `OnIndicatorAdded` | 디스크립터 등록 시 브로드캐스트되는 네이티브 이벤트 |
| `OnIndicatorRemoved` | 디스크립터 해제 시 브로드캐스트되는 네이티브 이벤트 |

#### 주요 함수

```cpp
static GetComponent(AController*)   // PC에서 매니저 인스턴스 가져오기 (헬퍼)
AddIndicator(UIndicatorDescriptor*) // 등록 + 이벤트 발행
RemoveIndicator(...)                // 해제 + 이벤트 발행
```

`bAutoRegister = true`, `bAutoActivate = true`로 PC 초기화 시 자동으로 살아난다.
PlayerController BP에 ControllerComponent로 추가만 해두면 된다.

---

### 3.3 `UIndicatorLibrary` (UBlueprintFunctionLibrary)

**파일**: `IndicatorLibrary.h/.cpp`
BP에서 매니저를 쉽게 가져오기 위한 정적 헬퍼 한 줄짜리 라이브러리.

```cpp
GetIndicatorManagerComponent(AController*) // 내부적으로 KausIndicatorManagerComponent::GetComponent 호출
```

---

### 3.4 `UIndicatorLayer` (UWidget)

**파일**: `IndicatorLayer.h/.cpp`
**역할**: HUD에 배치하는 UMG 위젯. RebuildWidget 시점에 `SActorCanvas`를 생성한다.

#### 주요 변수

| 변수 | 의미 |
|------|------|
| `ArrowBrush` | 화면 클램프 시 표시할 화살표 브러시 |
| `MyActorCanvas` | 실제 작업을 하는 Slate 패널 |

**사용법**: HUD 위젯의 UMG 디자이너 팔레트에서 `Indicator Layer`를 가져다 캔버스에 두기만 하면 된다. 한 번만 두면 된다 — 모든 indicator가 이 안에 그려진다.

---

### 3.5 `SActorCanvas` (Slate)

**파일**: `SActorCanvas.h/.cpp`
**역할**: 실제 indicator들을 화면에 그리는 Slate 패널. 등록·해제 이벤트를 듣고, 매 프레임 위치를 갱신하고, 위젯 풀로 인스턴스를 재활용하고, 정렬·클램프·화살표 그리기를 모두 담당한다.

직접 만질 일은 거의 없지만 알아둘 만한 것들:

- **위젯 풀링**: `FUserWidgetPool IndicatorPool`. 같은 클래스의 indicator를 반복 생성/해제할 때 인스턴스 재사용.
- **비동기 로드**: `TSoftClassPtr` 기반이므로 위젯 클래스가 메모리에 없으면 비동기 로드 후 슬롯 추가.
- **정렬**: Priority 오름차순 → Depth 내림차순(StableSort). 가까운 게 위로 온다.
- **자동 슬립**: 등록된 indicator가 0개가 되면 ActiveTimer를 끈다. 비용 0에 수렴.
- **`OnIndicatorAdded` 콜백**에서 `IIndicatorWidgetInterface::Execute_BindIndicator`를 호출 → 위젯이 디스크립터를 받아 자기 데이터로 사용 가능.

---

### 3.6 `IIndicatorWidgetInterface` (BP 인터페이스)

**파일**: `IActorIndicatorWidget.h`
**역할**: indicator 위젯이 디스크립터와 연결될 때 호출되는 BlueprintNativeEvent 한 쌍.

```cpp
BindIndicator(UIndicatorDescriptor*)   // 위젯 등장 시
UnbindIndicator(const UIndicatorDescriptor*) // 위젯 풀로 회수 시
```

위젯 BP에서 이 인터페이스를 구현하면, 디스크립터의 `DataObject`를 통해 어떤 캐릭터/노드의 indicator인지 알 수 있다. 구현하지 않아도 표시는 되지만, 위젯 안에서 동적 정보(이름, HP 등)를 보여주려면 필수.

---

### 3.7 `UKausIndicatorComponent` (USceneComponent)

**파일**: `KausIndicatorComponent.h/.cpp`
**역할**: 액터에 부착하는 단일 indicator용 편의 컴포넌트. 자기 자신을 anchor로 쓰며 BeginPlay에 자동 등록한다.

기존 `KausNodeComponent`가 상호작용 아이콘 표시에 이 컴포넌트를 쓰고 있다. **소켓 부착은 지원하지 않으므로** 본을 따라가야 하는 표현(머리 위 등)에는 쓰지 말 것. 그 용도는 다음 항목인 Emotion Indicator를 사용한다.

#### 주요 변수

| 변수 | 의미 |
|------|------|
| `IndicatorWidgetClass` | 표시할 위젯 |
| `ProjectionMode / HAlignment / VAlignment` | 투영·정렬 방식 |
| `bClampToScreen / bShowClampToScreenArrow` | 화면 클램프 옵션 |
| `WorldPositionOffset / ScreenSpaceOffset` | 오프셋 |
| `BoundingBoxAnchor / Priority` | 바운딩박스 모드용 앵커, 정렬 우선순위 |
| `ActiveIndicator` | 현재 활성된 디스크립터 (단일 슬롯) |

#### 주요 함수

```cpp
ActivateIndicator()    // 디스크립터 생성 + 매니저 등록
DeactivateIndicator()  // 디스크립터 unregister + 폐기
SetIndicatorWidgetClass(TSoftClassPtr) // 위젯 클래스 교체 (다음 Activate부터 적용)
```

---

## 4. Emotion Indicator 시스템

캐릭터 얼굴/손 옆에 여러 감정 indicator를 동시에 표시하기 위한 별도 컴포넌트.
**소켓 부착 + 다중 indicator + on/off 토글**을 모두 지원한다.

### 4.1 설계 의도

기존 `KausIndicatorComponent`는 (a) 소켓 부착 미지원, (b) 단일 슬롯, (c) `KausNodeComponent`에서 이미 사용 중이라 수정 시 영향이 크다.
따라서 같은 인프라(매니저/캔버스/디스크립터)를 공유하면서 **책임만 분리**한 별도 컴포넌트로 구현했다.

(두 번째 도식 참조 — ShowEmotion 호출 흐름)

### 4.2 `UKausEmotionIndicatorDataAsset`

**파일**: `KausEmotionIndicatorDataAsset.h`
**역할**: 감정 태그와 위젯/소켓을 매핑하는 데이터 자산. 에디터에서 한 번 만들어두면 캐릭터 BP에 할당해 재사용한다.

#### `FKausEmotionIndicatorEntry` 구조체

| 필드 | 타입 | 의미 |
|------|------|------|
| `EmotionTag` | `FGameplayTag` | 식별자. 예: `Emotion.Anger`, `Emotion.Sweat`, `Emotion.Happy`. 메타 `Categories="Emotion"`으로 에디터 필터링. |
| `WidgetClass` | `TSoftClassPtr<UUserWidget>` | 표시할 위젯. Soft 참조라 등장 시점까지 메모리에 안 올라간다. |
| `SocketName` | `FName` | 부착 본 이름. 예: `head`, `hand_r`. NAME_None이면 메시 원점. |
| `WorldPositionOffset` | `FVector` | 소켓 기준 월드 오프셋. 같은 head라도 감정마다 위치를 다르게 두고 싶을 때 사용. |
| `ScreenSpaceOffset` | `FVector2D` | 투영 후 픽셀 오프셋. |
| `HAlignment / VAlignment` | enum | 위젯 정렬. 기본은 가운데/아래(머리 바로 위에 띄우기 좋음). |
| `ProjectionMode` | enum | 보통 `ComponentPoint` (소켓 단일 점). |
| `bClampToScreen` | bool | 화면 밖일 때 가장자리에 붙일지. |
| `Priority` | int32 | 같은 위치에 겹칠 때 누가 위로 올지. |

#### `UKausEmotionIndicatorDataAsset` 클래스

| 멤버 | 의미 |
|------|------|
| `Emotions` | `TArray<FKausEmotionIndicatorEntry>`. 에디터에서 항목별로 추가/편집. `TitleProperty="EmotionTag"`로 배열 항목이 태그 이름으로 보인다. |
| `FindEntry(Tag)` | 태그로 항목을 찾아 포인터 반환. 없으면 nullptr. |

### 4.3 `UKausEmotionIndicatorComponent`

**파일**: `KausEmotionIndicatorComponent.h/.cpp`
**역할**: 캐릭터에 부착되어 여러 감정 indicator를 동시에 관리하는 액터컴포넌트.

#### 주요 변수

| 변수 | 의미 |
|------|------|
| `EmotionDataAsset` | 위 DataAsset. 캐릭터 BP에서 할당. |
| `TargetMeshOverride` | 부착 대상 메시 명시 지정. 비워두면 Owner가 ACharacter일 때 `GetMesh()` 자동 사용. |
| `ActiveDescriptors` | `TMap<FGameplayTag, UIndicatorDescriptor*>`. 현재 표시 중이거나 visible-toggle 중인 디스크립터 캐시. |

#### 주요 함수

```cpp
ShowEmotion(FGameplayTag)   // 감정 표시 (이미 있으면 visible만 켬)
HideEmotion(FGameplayTag)   // 가시성만 끔 (재표시 비용 절약, 디스크립터는 유지)
HideAllEmotions()           // 전부 unregister + 캐시 비우기 (완전 정리)
SetTargetMeshComponent(...) // 부착 대상 메시 변경
```

#### `ShowEmotion` 동작 단계

(두 번째 도식 참조)

1. **중복 체크** — `ActiveDescriptors`에 이미 있으면 `SetDesiredVisibility(true)`만 하고 종료. 비용 0.
2. **DataAsset 조회** — `FindEntry(Tag)`로 매핑 정보 가져오기. 없거나 위젯 클래스가 null이면 경고 로그 후 종료.
3. **타겟 결정** — `OverrideMesh` 우선, 없으면 Owner의 `Character::GetMesh()`, 그것도 없으면 RootComponent.
4. **디스크립터 생성·세팅** — Entry의 모든 값을 디스크립터에 복사. `SetSceneComponent(Mesh) + SetComponentSocketName(SocketName)` 조합으로 본 추적이 켜진다.
5. **매니저 등록** — `Manager->AddIndicator(Desc)`. 이 시점부터 SActorCanvas가 자동으로 위젯 로드·렌더·추적.
6. **캐시 등록** — `ActiveDescriptors.Add(Tag, Desc)`. 다음 Show/Hide 호출 시 빠른 조회용.

#### `HideEmotion` vs `HideAllEmotions`의 차이

`HideEmotion`은 디스크립터를 매니저에서 빼지 않고 **가시성만 false로** 만든다. `SActorCanvas`는 매 프레임 `GetIsVisible()`을 polling하므로 즉시 사라지지만, 위젯과 디스크립터는 살아있어 다음 `ShowEmotion` 호출 시 재생성 비용이 0이다. 자주 토글되는 감정 표현에 최적.

`HideAllEmotions`는 모든 디스크립터를 `UnregisterIndicator` → 캐시에서 제거. 캐릭터가 화면에서 사라지거나 더 이상 감정 표현이 필요 없는 시점에 호출.

#### `EndPlay` 처리

자동으로 `HideAllEmotions`를 호출해 매니저에 leak이 남지 않게 한다. 캐릭터가 파괴돼도 메시가 GC되면 `bAutoRemoveWhenIndicatorComponentIsNull = true`로 SActorCanvas가 자체 정리하지만, 명시적 정리가 더 안전하다.

---

## 5. 사용 가이드

### 5.1 최초 셋업 (1회)

**A. PlayerController 준비**
PC 클래스(보통 `KausPlayerController`)에 `KausIndicatorManagerComponent`를 ControllerComponent로 추가. 이미 BP에 있는지 먼저 확인. 없으면 추가 후 컴파일.

**B. HUD 준비**
HUD 위젯(`W_HUD_Layout` 등)의 UMG 디자이너에서 캔버스 패널에 `Indicator Layer` 위젯을 배치. 화면 전체를 덮도록 anchor `Fill`. `ArrowBrush`에 화살표 텍스처를 지정 (선택사항).

**C. GameplayTag 등록**
`Config/DefaultGameplayTags.ini` 또는 `KausGameplayTags.h`에 감정 태그 추가. 예:

```
Emotion
Emotion.Anger
Emotion.Sweat
Emotion.Happy
Emotion.Sad
Emotion.Surprise
```

**D. 위젯 BP 작성**
각 감정마다 `WBP_Emotion_Anger`, `WBP_Emotion_Sweat` 등 UserWidget 생성. 정적 이미지든 애니메이션이든 자유. 필요하면 `IIndicatorWidgetInterface` 구현하여 `BindIndicator` 이벤트에서 디스크립터의 DataObject를 받아 동적 표현 가능.

### 5.2 캐릭터별 셋업

**A. DataAsset 생성**
콘텐츠 브라우저에서 우클릭 → Miscellaneous → Data Asset → `KausEmotionIndicatorDataAsset` 선택. 이름 예: `DA_NPC_Emotions`.

**B. DataAsset 채우기**
Emotions 배열에 감정별 항목 추가:

| EmotionTag | WidgetClass | SocketName | WorldOffset |
|-----------|-------------|-----------|-------------|
| Emotion.Anger | WBP_Emotion_Anger | head | (0, 0, 20) |
| Emotion.Sweat | WBP_Emotion_Sweat | head | (0, 5, 15) |
| Emotion.Happy | WBP_Emotion_Happy | head | (0, 0, 25) |

같은 감정 셋이라도 캐릭터마다 다른 DA를 만들어 위젯/소켓을 커스터마이즈할 수 있다.

**C. 캐릭터 BP에 컴포넌트 추가**
캐릭터 BP의 컴포넌트 패널에서 `KausEmotionIndicatorComponent` 추가. Details 패널에서 `EmotionDataAsset` 핀에 위 DA 할당.

### 5.3 런타임 호출

**C++**:
```cpp
EmotionComp->ShowEmotion(KausTags::Emotion_Anger);
EmotionComp->ShowEmotion(KausTags::Emotion_Sweat);  // 동시에 둘 다
EmotionComp->HideEmotion(KausTags::Emotion_Anger);  // 화남만 끔
EmotionComp->HideAllEmotions();                     // 전체 정리
```

**BP**: 컴포넌트의 Show Emotion / Hide Emotion / Hide All Emotions 노드를 이벤트 그래프에서 호출. 태그는 GameplayTag 핀으로 선택.

---

## 6. 자주 묻는 질문

**Q. 감정 indicator가 보이는데 본을 따라가지 않는다.**
SocketName이 SkeletalMesh의 실제 본/소켓 이름과 일치하는지 확인. 대소문자 구분된다. 본 에디터에서 정확한 이름을 복사해 사용.

**Q. 머리 위가 아니라 머리 안에서 보인다.**
`WorldPositionOffset.Z`를 키워보자. 캐릭터 스케일에 따라 다르지만 보통 +20~+30이면 머리 위 손바닥 정도 거리.

**Q. 카메라가 멀어지면 너무 작아진다 / 항상 같은 크기로 보고 싶다.**
indicator 위젯 자체는 스크린 픽셀 단위로 그려져서 거리에 따라 작아지지 않는다. 만약 작아 보인다면 위젯 BP 안에서 Scale을 거리 기반으로 조정하거나, 프로젝트 차원에서 DPI 스케일을 점검.

**Q. 같은 감정을 두 번 ShowEmotion 하면 두 개가 뜨나?**
아니다. 캐시에 이미 있으면 가시성만 켜고 추가 디스크립터를 만들지 않는다.

**Q. NPC 여러 명이 동시에 화남 표현을 하면?**
각 NPC가 자기 EmotionIndicatorComponent를 가지고 있으므로 서로 영향 없음. 전부 같은 매니저(PC의 매니저)에 등록되지만 디스크립터별로 SceneComponent가 다르므로 각자 자기 캐릭터를 따라간다.

**Q. 멀티플레이어에서 동작하나?**
현재 구조는 LocalPlayer 0번 기준이라 SP/싱글뷰포트에 최적화되어 있다. 스플릿스크린이나 서버 권위 동기화는 별도 작업이 필요.

**Q. KausIndicatorComponent와 EmotionIndicatorComponent를 한 캐릭터에 같이 써도 되나?**
가능. 둘 다 같은 매니저를 통해 등록되며 SActorCanvas가 일괄 처리한다. 단 각 컴포넌트가 만든 디스크립터는 독립적으로 관리되므로 서로 간섭하지 않는다.

---

## 7. 확장 시 주의점

**디스크립터 재사용 금지** — `UIndicatorDescriptor::SetIndicatorManagerComponent`는 `ensure(ManagerPtr.IsExplicitlyNull())`로 보호되어, 한 번 매니저에 붙은 디스크립터는 unregister 후에도 재등록할 수 없다. ensure가 발생하면서도 실제 등록은 안 되는 무력 상태가 된다. 새로 만들어 쓸 것.

**위젯에서 디스크립터 보유 시 약참조 사용** — `BindIndicator`로 받은 디스크립터를 위젯이 강참조로 들고 있으면 풀에서 회수돼도 GC가 미뤄진다. `TWeakObjectPtr` 권장.

**소켓 이름 오타** — `GetSocketTransform`은 존재하지 않는 소켓 이름에 대해 컴포넌트 원점을 반환하는 fallback이 있다. 즉 본 추적이 조용히 실패한다. 위치가 이상하다면 가장 먼저 의심할 곳.

**Priority 충돌** — 여러 감정이 같은 소켓에 동시에 뜨면 정렬 우선순위가 같을 때 z-order가 불안정할 수 있다. Entry마다 다른 Priority를 줘서 명시적으로 결정.

**DataAsset의 SoftRef 로딩 타이밍** — 위젯 클래스가 Soft라 첫 ShowEmotion 호출 시 비동기 로드되어 한 프레임 정도 지연이 있을 수 있다. 즉시 표시가 중요한 컷씬 등에서는 미리 `LoadSynchronous` 또는 PreloadAsset 권장.
