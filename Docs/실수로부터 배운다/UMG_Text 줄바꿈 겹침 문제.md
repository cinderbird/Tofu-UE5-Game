# UMG 텍스트 Wrap + 컨테이너 사이즈 실수 방지 체크리스트

> **목적:** wrap된 텍스트가 다음 항목과 겹치거나 잘리는 현상을 사전에 차단한다.
> **대상:** UE5.5.4, UMG, RichTextBlock / CommonRichTextBlock, ScrollBox, ListView, SizeBox.
> **기록 사유:** Project Kaus W_DialogueLog 작업 중 SizeBox HeightOverride로 인한 텍스트 겹침 사고 발생. 재발 방지.

---

## 핵심 원칙 (한 줄 요약)

> **Wrap된 텍스트는 가변 높이를 가진다. 부모 체인의 어디에도 그 높이를 강제로 고정하는 지점이 있어선 안 된다.**

---

## ⚠️ 실수 사례 기록 (2026-05-10)

### 무엇이 잘못되었나

`W_DialogueLog_Context`(ListView 엔트리)의 SizeBox 설정:

```
SizeBox_116:
  bOverride_MinDesiredHeight = True
  bOverride_MaxDesiredHeight = True
  MinDesiredHeight = 40
  MaxDesiredHeight = 40    ← 가변이어야 할 높이를 40px로 고정
  bOverride_MinDesiredWidth = True
  bOverride_MaxDesiredWidth = True
  MinDesiredWidth = 180
  MaxDesiredWidth = 160    ← Min > Max 모순
```

### 증상

- 한 줄짜리 텍스트: 정상 표시
- 두 줄 이상 wrap된 텍스트: **두 번째 줄이 다음 항목 영역에 겹쳐서 그려짐**
- 줄바꿈이 한 번도 발생하지 않을 때만 멀쩡해 보였음 → 진단을 헷갈리게 만듦

### 원인 메커니즘

1. RichTextBlock이 wrap되어 Desired Height = 80px 보고
2. SizeBox가 MaxDesiredHeight = 40 으로 강제 클램프
3. 잘려나간 두 번째 줄이 슬롯 영역을 벗어나 다음 슬롯에 그려짐
4. 결과: 시각적 겹침

### 해결

SizeBox의 **Height Override를 모두 비활성화**. 너비만 제한하고 높이는 자식 Desired Size를 따르도록.

---

## 체크리스트 1: 텍스트 위젯 자체

| 항목 | 확인 |
|---|---|
| `AutoWrapText = True` | ☐ |
| `WrappingPolicy = AllowPerCharacterWrapping` (한국어/CJK인 경우) | ☐ |
| `MinDesiredWidth`가 합리적 값 (또는 비활성) | ☐ |
| `Wrap Text At = 0` (특정 픽셀 강제 wrap이 필요 없다면) | ☐ |
| Justification 설정 명시 | ☐ |

---

## 체크리스트 2: SizeBox로 감쌀 때 (가장 위험한 지점)

> **SizeBox는 가로 제한 전용으로만 써라. 세로는 절대 고정하지 마라.**

| 항목 | 확인 |
|---|---|
| `bOverride_WidthOverride = True` (가로는 고정 OK) | ☐ |
| `bOverride_HeightOverride = False` (세로는 자식이 결정) | ☐ |
| `bOverride_MinDesiredHeight = False` ⚠️ | ☐ |
| `bOverride_MaxDesiredHeight = False` ⚠️ **(겹침의 주범)** | ☐ |
| `MinDesiredWidth ≤ MaxDesiredWidth` (모순 없음) | ☐ |
| `MinDesiredHeight ≤ MaxDesiredHeight` (모순 없음) | ☐ |

**예외:** 명시적으로 한 줄 슬롯이 필요하고 wrap이 발생할 일이 절대 없는 경우만 Height 고정. 이런 경우 `AutoWrapText = False`도 함께 설정.

---

## 체크리스트 3: 부모 컨테이너 (자식 슬롯 옵션)

세로 방향 크기가 **자식 → 부모로 전파**되어야 함.

| 컨테이너 | 자식 슬롯 Size | wrap 가변 높이 지원 |
|---|---|---|
| `VerticalBox` | **Auto** | ✅ |
| `VerticalBox` | Fill | ❌ (부모가 높이 강제) |
| `ScrollBox` | (자동 Auto) | ✅ |
| `SizeBox` | WidthOverride만 | ✅ |
| `SizeBox` | HeightOverride 사용 | ❌ |
| `CanvasPanel` | SizeToContent = true | ✅ |
| `CanvasPanel` | SizeToContent = false | ❌ |
| `Border` | (단일 자식) | ✅ |
| `Overlay` | (단일 자식 기준) | ✅ |
| `HorizontalBox` | Auto | ✅ |

**원칙:** wrap 텍스트의 부모 체인을 위로 따라가며, **모든 슬롯이 자식 Desired Height를 존중하는지** 확인.

---

## 체크리스트 4: ListView / CommonListView

> **`UListView` 계열은 기본적으로 엔트리 높이를 고정으로 잡는다.** 가변 높이가 필요하면 ScrollBox + VerticalBox로 교체를 우선 검토.

| 항목 | 확인 |
|---|---|
| 엔트리 위젯 루트가 Canvas Panel이 아님 (VerticalBox/SizeBox/Border 권장) | ☐ |
| 엔트리 위젯의 SizeBox가 Height를 강제하지 않음 | ☐ |
| 항목 수가 적고 가상화가 불필요하다면 → ScrollBox + VerticalBox로 대체 검토 | ☐ |
| EntryWidgetClass의 Desired Height가 wrap 가능한 폭에서 일관되게 보고됨 | ☐ |

**판단 기준:**
- 항목 수 ≤ 100, 가변 높이 필요 → **ScrollBox + VerticalBox** (권장)
- 항목 수 ≫ 100, 모두 같은 높이 → ListView 유지 가능
- 항목 수 ≫ 100, 가변 높이 필요 → ListView 가변 높이 워크어라운드 또는 페이지네이션 검토

---

## 체크리스트 5: Canvas Panel 사용 시

> **Wrap 텍스트를 Canvas Panel에 직접 자식으로 두지 마라.**

Canvas Panel은 자식의 Desired Size를 무시하고 슬롯 크기로 강제한다 (Epic 직원 답변, UE 공식 입장). Canvas Panel과 wrap 텍스트 사이에 **반드시 flow layout panel**(VerticalBox / HorizontalBox / ScrollBox / SizeBox)을 한 겹 끼워라.

| 항목 | 확인 |
|---|---|
| Wrap 텍스트의 직계 부모가 Canvas Panel이 아님 | ☐ |
| Canvas Panel 안의 슬롯이 명시적 Size를 가짐 (자식이 Desired Size를 보고할 수 없음) | ☐ |
| 가변 높이가 필요한 영역은 VerticalBox/ScrollBox로 감싸짐 | ☐ |

---

## 진단 플로우 (텍스트가 겹치거나 잘릴 때)

```
1. 한 줄일 때 정상, 여러 줄일 때 깨지는가?
   → YES: 부모 체인 어딘가에서 높이를 강제 고정 중. 체크리스트 2~3 확인.

2. 모든 길이에서 깨지는가?
   → YES: AutoWrapText 자체가 미동작. 체크리스트 1 + Canvas Panel 직계 자식 여부 확인.

3. ListView 엔트리에서만 깨지는가?
   → YES: ListView 고정 높이 슬롯 문제. 체크리스트 4 확인.

4. 한국어 단어가 어색하게 끊기는가?
   → YES: WrappingPolicy를 AllowPerCharacterWrapping으로.
```

---

## Project Kaus 적용 가이드 (대화 로그 표준 구조)

```
W_DialogueLog (UCommonUserWidget)
└─ Overlay
   └─ CommonBorder
      └─ SizeBox
         ├─ WidthOverride = 800           ✅ 가로만 고정
         ├─ HeightOverride = 500          ✅ 외곽 컨테이너 높이는 OK
         └─ ScrollBox (Vertical)          ✅ ListView 대신 권장
            └─ VerticalBox (BindWidget: LogEntries)
               └─ [런타임 AddChild(W_DialogueLog_Context)]

W_DialogueLog_Context (UCommonUserWidget)  ← 개별 라인
└─ VerticalBox  (또는 Border 한 겹 + 그 안에 VerticalBox)
   └─ CommonRichTextBlock
      ├─ AutoWrapText = True
      ├─ WrappingPolicy = AllowPerCharacterWrapping
      ├─ TextStyleSet = DT_DialogueRichTextStyles
      └─ 슬롯: HorizontalAlignment = Fill, VerticalAlignment = Top, Size = Auto
```

**이 구조에서 절대 하지 말 것:**
- ❌ `W_DialogueLog_Context`의 어느 부모에도 `MaxDesiredHeight` 설정 금지
- ❌ ListView 사용 시 엔트리에 고정 높이 SizeBox 사용 금지
- ❌ RichTextBlock 부모 슬롯에 `Size = Fill` 사용 금지
- ❌ Canvas Panel 직계 자식으로 wrap 텍스트 배치 금지

---

## 핵심 교훈

1. **`bOverride_*` 플래그는 강제 클램프다.** "Min/Max"라는 이름이지만 Override가 켜진 순간 가변성을 잃는다.
2. **한 줄에서 정상이라고 안심하지 마라.** wrap이 발생하지 않는 길이로 테스트하면 버그가 숨는다. **일부러 길게 입력해서 wrap 상태 확인 필수.**
3. **Min > Max 같은 모순 설정은 UE가 경고하지 않는다.** 설정 시 직접 검증.
4. **CJK 텍스트는 단어 경계가 없으므로** 영어로만 테스트하면 wrap 동작이 다르다. 한국어로도 테스트.
5. **SizeBox의 역할은 "가로 제한"이지 "고정 사이즈 박스"가 아니다.** 이름에 속지 마라.

---

## 참고 자료 (외부)

- Epic Forums — *Ensuring Consistent Spacing in Vertical Box with Auto-Wrapped TextBlocks*
  https://forums.unrealengine.com/t/ensuring-consistent-spacing-in-vertical-box-with-auto-wrapped-textblocks-umg/1937732
- UE 공식 이슈 트래커 — UE-25724 (TextBox Hysteresis 문제)
  https://issues.unrealengine.com/issue/UE-25724
- Epic Forums — *[UMG] How do I create a non editable multiline text block?* (Epic 직원 Nick의 Canvas Panel 권장 사항)
  https://forums.unrealengine.com/t/umg-how-do-i-create-a-non-editable-multiline-text-block/291859
- Double Cat — *Nice text wrapping in UMG* (Desired Size prepass 동작 설명)
  https://www.doublecat.com.au/blog/nice-text-wrapping-in-umg

---

*작성일: 2026-05-10 | 사고 사례: W_DialogueLog SizeBox HeightOverride 겹침*
