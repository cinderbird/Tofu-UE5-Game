# KausUI Material System

UI Button/Border용 SDF 기반 머터리얼 시스템. Base 1개 + Glow 1개 + 공유 SDF Material Function 1개로 구성된다.

**대상**: `Project Kaus` 내부 개발/디자인 작업자
**엔진**: UE 5.5.4
**위치**: `/Game/UI/Art/Material/ButtonsAndBorders/V2/`

---

## 1. 자산 구성

| 자산 | 역할 | 의존성 |
|---|---|---|
| `MF_KausUI_RoundedBoxSDF` | Rounded-rect SDF 계산. `float2(SDF_Outer, SDF_Inner)` 출력 | 없음 |
| `M_KausUI_Base` | Fill + Outline 합성 (실선 도형) | MF |
| `M_KausUI_Glow` | Inner + Outer Glow 합성 (Base와 같은 도형 공유) | MF |

세 자산은 같은 SDF를 호출하므로 **Base와 Glow의 형상 파라미터가 일치하면 두 머터리얼이 자동으로 동일한 모양을 그린다**. 디자이너가 따로 도형을 맞춰줄 필요가 없다.

```
MF_KausUI_RoundedBoxSDF
        │
        ├─── M_KausUI_Base   (실체 도형)
        └─── M_KausUI_Glow   (Inner/Outer 빛, 위젯이 더 큼)
```

---

## 2. MF_KausUI_RoundedBoxSDF

### 2.1 시그니처

| 입력 | 타입 | 단위 | 설명 |
|---|---|---|---|
| UV | Vector2 | 정규화 | 위젯 UV [0, 1] |
| ButtonSize | Vector2 | 픽셀 | 도형의 실제 크기 |
| CornerTL | Scalar | 픽셀 | 좌상단 코너 반경 |
| CornerTR | Scalar | 픽셀 | 우상단 코너 반경 |
| CornerBR | Scalar | 픽셀 | 우하단 코너 반경 |
| CornerBL | Scalar | 픽셀 | 좌하단 코너 반경 |
| OutlineThickness | Scalar | 픽셀 | 외곽선 두께 |

| 출력 | 타입 | 의미 |
|---|---|---|
| Result.x | float | **SDF_Outer** — outline 바깥 에지까지의 부호 거리 (0 = UV 경계) |
| Result.y | float | **SDF_Inner** — fill 영역 안쪽 에지까지의 부호 거리 (0 = outline-fill 경계) |

부호 규약: **음수 = 영역 내부, 양수 = 영역 외부**.

### 2.2 핵심 동작

- `(UV - 0.5) * ButtonSize`로 위젯 중심 기준 픽셀 좌표 계산
- Inigo Quilez Rounded-Box SDF 공식 사용, 4코너 개별 반경 제어
- 코너 반경은 내부에서 자동 클램프됨: `min(CornerXX, halfMin - OutlineThickness)`. 사용자가 너무 큰 값을 넣어도 깨지지 않음
- 분기 없음 (branchless ternary), GPU 친화

### 2.3 출력 분리 패턴

호출 측은 ComponentMask로 채널 분리해서 사용한다.

```
MF Output ──┬── ComponentMask(R) ──> NamedReroute "SDF_Outer"
            └── ComponentMask(G) ──> NamedReroute "SDF_Inner"
```

이 패턴은 Base와 Glow 양쪽 모두 동일하다.

---

## 3. M_KausUI_Base

### 3.1 머터리얼 설정

| 항목 | 값 |
|---|---|
| Material Domain | User Interface |
| Blend Mode | Translucent |
| Shading Model | Unlit |

### 3.2 파라미터

#### Group: 01_Shape

| 파라미터 | 타입 | 기본값 | Slider Min/Max | 비고 |
|---|---|---|---|---|
| Size_X | Scalar | 100 | 16 / 4096 | 픽셀, UMG 위젯 크기와 일치시켜야 함 |
| Size_Y | Scalar | 50 | 16 / 4096 | 〃 |
| CornerTL | Scalar | 8 | 0 / 64 | 픽셀 |
| CornerTR | Scalar | 8 | 0 / 64 | 〃 |
| CornerBR | Scalar | 8 | 0 / 64 | 〃 |
| CornerBL | Scalar | 8 | 0 / 64 | 〃 |
| OutlineThickness | Scalar | 1 | 0 / 16 | 픽셀, 0이면 외곽선 없음 |

#### Group: 02_Color

| 파라미터 | 타입 | 기본값 | 비고 |
|---|---|---|---|
| Fill Color | Vector | (0.1, 0.1, 0.1, 1.0) | RGB 사용, A는 무시 |
| Outline Color | Vector | (1.0, 1.0, 1.0, 1.0) | 〃 |

> **알파 채널은 별도 Scalar 권장**: `Fill Color`의 A를 직접 사용하지 말고 별도 ScalarParameter (`FillAlpha`, `OutlineAlpha`)로 관리하는 것이 MID 동기화 시 안전하다.

### 3.3 합성 로직

Custom HLSL 노드 (`KausUI_Base_Composite`):

1. `fwidth(SDF)` 기반 동적 AA width 계산
2. `aaFill = 1 - smoothstep(-aaInner, aaInner, SDF_Inner)` — Fill 마스크
3. `aaOuterMask = 1 - smoothstep(-aaOuter, aaOuter, SDF_Outer)`
4. `aaOutline = aaOuterMask * (1 - aaFill)` — Fill 영역에서 outline 색 누적 방지
5. Straight-alpha OVER 합성으로 Outline을 Fill 위에 얹음

이 구조 덕분에 **Fill 색을 바꿔도 Outline 색에 영향이 없고, 그 반대도 마찬가지**다. 레이어가 공간적으로 분리되어 있다.

### 3.4 출력

- Composite RGB → Emissive Color
- Composite A → Opacity

---

## 4. M_KausUI_Glow

### 4.1 머터리얼 설정

Base와 동일 (User Interface / Translucent / Unlit).

### 4.2 Base와의 결정적 차이

**WidgetSize ≠ ButtonSize**.

Glow는 Base의 도형 바깥으로 빛이 퍼져야 하므로, UMG 위젯이 ButtonSize보다 커야 한다. 머터리얼 내부에서 UV를 리매핑해 SDF가 ButtonSize 좌표계에서 계산되도록 한다.

```
UV_remapped = (UV - 0.5) * (WidgetSize / ButtonSize) + 0.5
```

이 식이 적용된 UV가 MF의 입력으로 들어간다. ButtonSize 입력은 그대로 사용한다.

### 4.3 파라미터

#### Group: 01_Shape (Base와 일치 필수)

| 파라미터 | 타입 | 기본값 |
|---|---|---|
| ButtonSize_X | Scalar | 100 |
| ButtonSize_Y | Scalar | 50 |
| CornerTL/TR/BR/BL | Scalar | 8 |
| OutlineThickness | Scalar | 1 |

#### Group: 02_Widget

| 파라미터 | 타입 | 기본값 | 비고 |
|---|---|---|---|
| WidgetSize_X | Scalar | 200 | UMG 위젯의 실제 픽셀 크기 |
| WidgetSize_Y | Scalar | 150 | 〃 |

> **WidgetSize ≥ ButtonSize 항상 성립해야 한다**. 위반 시 SDF 좌표계가 음수 스케일로 뒤집혀 결과가 깨진다.

#### Group: 03_OuterGlow

| 파라미터 | 타입 | 기본값 | 범위 |
|---|---|---|---|
| OuterColor | Vector | (1.0, 0.7, 0.2) | RGB |
| OuterAlpha | Scalar | 1.0 | 0 ~ 1 |
| OuterRadius | Scalar | 20.0 | 0 ~ 64 (픽셀) |
| OuterSoftness | Scalar | 1.0 | 0 ~ 1 |

#### Group: 04_InnerGlow

| 파라미터 | 타입 | 기본값 | 범위 |
|---|---|---|---|
| InnerColor | Vector | (1.0, 1.0, 1.0) | RGB |
| InnerAlpha | Scalar | 0.6 | 0 ~ 1 |
| InnerRadius | Scalar | 10.0 | 0 ~ 64 (픽셀) |
| InnerSoftness | Scalar | 1.0 | 0 ~ 1 |

### 4.4 합성 로직

Custom HLSL 노드 (`KausUI_Glow_Composite`):

- **Outer Glow**: `SDF_Outer > 0` 영역에서만 활성. 거리 `SDF_Outer`가 `OuterRadius`까지 falloff
- **Inner Glow**: `SDF_Inner < 0` 영역에서만 활성. 안쪽 가장자리(SDF_Inner=0)부터 안으로 `InnerRadius` 깊이까지 falloff
- Falloff 곡선: `Softness=0`이면 선형 `(1-t)`, `Softness=1`이면 smoothstep 곡선. 그 사이는 lerp 보간

두 영역은 SDF 정의상 공간적으로 배타적이다 (Base outline 영역이 둘 사이를 분리). 따라서 단순 가산 합성으로도 색 간섭이 발생하지 않는다.

### 4.5 출력

- Composite RGB → Emissive Color
- Composite A → Opacity

---

## 5. UMG 사용법

### 5.1 Base 단독 사용

가장 단순한 케이스. Image 위젯 한 개에 `MI_M_KausUI_Base` (또는 직접 MID) 적용.

```
[Canvas Slot]
└── Image (Size: 100×50, ButtonSize 파라미터와 동일)
    └── Material: MI_M_KausUI_Base
```

### 5.2 Base + Glow 조합

Glow 위젯이 Base보다 커야 하므로 Overlay/SizeBox로 감싼다.

```
[Overlay or Canvas]
├── Image: Glow  (Size: 200×150 = WidgetSize)
│   └── Material: MI_M_KausUI_Glow
│
└── Image: Base  (Size: 100×50 = ButtonSize, 중앙 정렬)
    └── Material: MI_M_KausUI_Base
```

Z-order는 보통 **Glow가 Base보다 아래**에 위치한다 (Outer Glow가 Base 뒤에 깔리는 시각). Inner Glow만 강조하고 싶으면 위에 올려도 무방하다.

### 5.3 MID 동기화 (C++)

위젯이 paint된 직후 MID에 실제 사이즈를 반영한다. `GetCachedGeometry()`는 첫 paint 이전에는 0을 반환하므로 NativeTick 또는 OnPaint 이후에 호출한다.

```cpp
// UMyButtonWidget.h
UPROPERTY() UMaterialInstanceDynamic* BaseMID = nullptr;
UPROPERTY() UMaterialInstanceDynamic* GlowMID = nullptr;

UPROPERTY(EditAnywhere) UImage* BaseImage = nullptr;
UPROPERTY(EditAnywhere) UImage* GlowImage = nullptr;

// UMyButtonWidget.cpp
void UMyButtonWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (BaseImage)
    {
        BaseMID = BaseImage->GetDynamicMaterial();
    }
    if (GlowImage)
    {
        GlowMID = GlowImage->GetDynamicMaterial();
    }
}

void UMyButtonWidget::NativeTick(const FGeometry& Geo, float Dt)
{
    Super::NativeTick(Geo, Dt);
    SyncMaterialSizes();
}

void UMyButtonWidget::SyncMaterialSizes()
{
    if (!BaseImage || !GlowImage || !BaseMID || !GlowMID)
    {
        return;
    }

    // Base: actual rendered size goes to Size_X/Y
    const FVector2D BaseSize = BaseImage->GetCachedGeometry().GetLocalSize();
    if (BaseSize.X > 0.f && BaseSize.Y > 0.f)
    {
        BaseMID->SetScalarParameterValue(TEXT("Size_X"), BaseSize.X);
        BaseMID->SetScalarParameterValue(TEXT("Size_Y"), BaseSize.Y);

        // Glow shape params must mirror Base's
        GlowMID->SetScalarParameterValue(TEXT("ButtonSize_X"), BaseSize.X);
        GlowMID->SetScalarParameterValue(TEXT("ButtonSize_Y"), BaseSize.Y);
    }

    // Glow: its own widget size goes to WidgetSize_X/Y
    const FVector2D GlowSize = GlowImage->GetCachedGeometry().GetLocalSize();
    if (GlowSize.X > 0.f && GlowSize.Y > 0.f)
    {
        GlowMID->SetScalarParameterValue(TEXT("WidgetSize_X"), GlowSize.X);
        GlowMID->SetScalarParameterValue(TEXT("WidgetSize_Y"), GlowSize.Y);
    }
}
```

CornerTL/TR/BR/BL과 OutlineThickness도 Base와 Glow가 동일해야 한다. 한 곳에서 변경할 때 다른 곳도 같이 갱신한다.

### 5.4 Material Instance 권장

머터리얼 자체를 직접 사용하지 말고 Material Instance를 만들어 사용한다.

- `MI_M_KausUI_Base` : 프로젝트 기본 색상/형상
- `MI_M_KausUI_Glow` : 프로젝트 기본 글로우 색상/강도
- 상태별 변형 (`_Hover`, `_Pressed`, `_Disabled`)은 MI를 또 상속해서 만든다

---

## 6. 일반적인 사용 시나리오

| 시나리오 | Corner | OutlineThickness | FillAlpha | OutlineAlpha | Glow |
|---|---|---|---|---|---|
| 일반 버튼 | 8 | 1.5 | 1.0 | 1.0 | Off (Alpha=0) |
| 알약 버튼 | min(W,H)/2 | 2.0 | 1.0 | 1.0 | Off |
| 탭 (상단만 둥글게) | TL/TR=12, BR/BL=0 | 2.0 | 1.0 | 1.0 | Off |
| 빈 프레임 (테두리만) | 8 | 2.0 | **0.0** | 1.0 | Off |
| Hover 강조 | 8 | 1.5 | 1.0 | 1.0 | Outer (radius 20~30) |
| 알림/경고 | 8 | 2.0 | 1.0 | 1.0 | Outer 빨강 + Inner 빨강 |
| 비활성 | 8 | 1.0 | 0.5 | 0.5 | Off |
| Selected | 8 | 1.5 | 1.0 | 1.0 | Inner 흰색 |

---

## 7. 트러블슈팅

### 7.1 화면이 검은색이다 / 아무것도 안 보인다

**원인 1**: Fill/Outline의 알파가 0
- 검사: VectorParameter에서 A 값 확인
- 해결: A를 1.0으로 설정 (또는 별도 Alpha Scalar 사용)

**원인 2**: Size_X 또는 Size_Y가 0
- 검사: ScalarParameter 기본값 확인
- 해결: 위젯 실제 크기로 설정 (보통 100, 50 같은 픽셀 값)

**원인 3**: Material Domain이 User Interface가 아님
- 검사: 머터리얼 Details 패널
- 해결: User Interface로 변경 후 재컴파일

### 7.2 화면 전체가 단색으로 칠해진다 (도형이 안 보임)

**원인**: Material Editor Preview Size와 Size_X/Y 단위 불일치
- 예: Preview Size = 250×250, Size = 100×50일 때 도형이 화면 가운데 작게 그려져야 하지만, ButtonSize 좌표계가 Preview에 stretch되어 화면 전체가 Fill 색으로 보임
- 해결: Preview Size를 Size_X/Y와 일치시키거나, UMG에 배치해서 확인

### 7.3 Glow가 사각형 가장자리에서 잘린다

**원인**: WidgetSize가 ButtonSize + 2*OuterRadius보다 작음
- 해결: UMG에서 Glow Image 위젯을 더 크게 잡거나 OuterRadius를 줄임
- 가이드: `WidgetSize >= ButtonSize + 2 * (OuterRadius + 4)` 정도 여유 권장

### 7.4 Glow 도형이 Base와 어긋나 보인다

**원인 1**: ButtonSize, Corner*, OutlineThickness가 Base와 Glow 사이에 다름
- 해결: 5.3절의 `SyncMaterialSizes()` 패턴으로 동기화

**원인 2**: Glow 위젯이 Base와 중심 정렬이 아님
- 해결: UMG에서 Anchor를 Center로, Alignment를 (0.5, 0.5)로

### 7.5 Outline이 안 보인다

**원인 1**: OutlineThickness = 0
- 해결: 1.0 이상으로

**원인 2**: 위젯이 매우 작아서 1px 이하로 렌더링됨
- 해결: OutlineThickness를 2~3으로 키우거나 위젯 크기 확대

### 7.6 코너가 직각으로 보인다

**원인**: CornerTL/TR/BR/BL 값이 너무 작음 (예: 0.18)
- 해결: 8~16 정도로 설정

**참고**: 코너는 내부에서 `min(halfMin - OutlineThickness, CornerXX)`로 클램프되므로 큰 값을 넣어도 도형이 깨지지 않음

### 7.7 Preview는 정상인데 UMG에서 모양이 다르다

**원인**: UMG 위젯 실제 크기와 Size_X/Y 파라미터 불일치
- 해결: 5.3절 `SyncMaterialSizes()` 적용 또는 위젯 크기를 Size 파라미터와 정확히 일치시킴

### 7.8 Inner Glow와 Outer Glow가 겹쳐 보인다

**구조상 발생할 수 없는 현상**. 두 영역은 Base outline (SDF_Outer ≤ 0 AND SDF_Inner ≥ 0) 띠를 사이에 두고 분리됨.

만약 발생한다면:
- ComponentMask 연결이 잘못됨 (R/G 마스크가 뒤바뀌거나 둘 다 같은 채널)
- 검사: SDF_Outer/SDF_Inner NamedReroute의 입력이 각각 R, G ComponentMask인지

---

## 8. 디버그 출력 패턴

머터리얼 동작이 의심될 때 Composite Custom 노드의 코드 첫 줄에 임시로 추가:

### Base 디버그

```hlsl
// Visualize SDF directly
return float4(saturate(SDF_Outer * 0.02 + 0.5),
              saturate(-SDF_Inner * 0.02 + 0.5),
              0.0,
              1.0);
```

빨간 그라디언트(바깥 양수) + 초록 그라디언트(안쪽 음수) 두 개가 보이면 SDF 정상.

### Glow 디버그

```hlsl
// Visualize per-layer mask (no color, no alpha mixing)
return float4(outerGlow, innerGlow, 0.0, 1.0);
```

빨강 띠가 Base 외곽선 바깥, 초록 띠가 Base 안쪽 가장자리에 보이면 정상.

확인 후 디버그 줄을 지우고 정상 코드로 복귀시킨다.

---

## 9. 확장 시 고려사항

이 시스템에 추가 효과를 얹을 때의 가이드라인.

### 9.1 새 머터리얼 추가 (예: Drop Shadow)

- `MF_KausUI_RoundedBoxSDF`를 그대로 호출
- UV 입력 시 shadow offset만큼 평행이동: `UV - ShadowOffset / WidgetSize`
- ButtonSize, Corner*, OutlineThickness는 Base와 동일하게 받음
- Composite는 `SDF_Outer < 0`인 영역만 그리되 Base보다 뒤로 (위젯을 더 크게)

### 9.2 SDF 자체에 새 형상 추가 (예: 기울어진 사각형)

- MF를 직접 수정하지 말고 **새 MF**를 만든다 (`MF_KausUI_TiltedBoxSDF` 등)
- 출력 시그니처 (`float2(SDF_Outer, SDF_Inner)`)를 동일하게 유지하면 Base/Glow의 합성 로직을 그대로 재사용 가능

### 9.3 애니메이션 (Hover/Pressed 전환)

- Color, Alpha, Radius, Softness는 모두 ScalarParameter/VectorParameter이므로 BP의 Tween/Curve로 시간 보간 가능
- 형상 파라미터 (Size, Corner)는 보간 시 `SyncMaterialSizes()`와 충돌하지 않도록 주의

---

## 10. 변경 이력

| 날짜 | 변경 |
|---|---|
| 2026-05-10 | 초기 시스템 구축. Base + Glow + 공유 SDF MF 완성 |

---

## 부록 A: 파일 경로 규칙

```
/Game/UI/Art/Material/ButtonsAndBorders/V2/
├── MF_KausUI_RoundedBoxSDF        (Material Function)
├── M_KausUI_Base                  (Master Material)
├── M_KausUI_Glow                  (Master Material)
├── MI_M_KausUI_Base               (Default Material Instance)
├── MI_M_KausUI_Base_Hover         (Variant)
├── MI_M_KausUI_Base_Pressed       (Variant)
├── MI_M_KausUI_Base_Disabled      (Variant)
├── MI_M_KausUI_Glow               (Default)
└── MI_M_KausUI_Glow_Alert         (Variant)
```

새 변형은 항상 MI 단계에서 만든다. Master Material은 기능 추가 외에는 건드리지 않는다.

## 부록 B: 좌표계와 부호 규약 요약

```
UV space:        [0, 1]
Pixel space:     (UV - 0.5) * Size,  중심 = 원점
SDF 부호:         음수 = 안, 0 = 경계, 양수 = 밖
Y 축:             아래쪽 양수 (UE/UMG UV 관습)
단위 일관성:      코너, 두께, radius 모두 픽셀
```
