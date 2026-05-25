# Kaus 메인 화면 — 라이팅 & 포스트 프로세스 설계서

## 1. 팔레트 색상 역할 정의

| 역할 | HEX (근사) | UE 매핑 | 비고 |
|------|-----------|---------|------|
| **핫핑크 (Primary)** | #F03070 | Bloom Tint, UI Accent | 화면 전체의 인상을 결정 |
| **소프트핑크** | #F0A0C0 | Key Light 색 보정 | 따뜻한 주광 톤 |
| **바이올렛** | #A060D0 | Skylight Color | 그림자의 색조를 결정 |
| **민트그린** | #40D0A0 | Rim Light / 환경 반사 | 캐릭터 윤곽 강조용 보조광 |
| **페일옐로** | #E0D080 | Fill Light / Highlight | 하이라이트 영역의 따뜻한 톤 |
| **라이트핑크** | #F0C0D0 | Midtone 보정 | 피부 하프톤 보조 |
| **피치** | #F0C0B0 | Color Grading Midtone | 중간 밝기 영역의 따뜻함 |
| **라이트라벤더** | #F0E0F0 | Bloom 밝은 영역 톤 | Lens Flare 색상 |
| **다크네이비** | #1A1A60 | Deep Shadow Color | 가장 어두운 그림자 기저 |
| **딥네이비** | #0A0A40 | Shadow Floor (Local Exposure로 보정) | 순흑 대체 |

**난한색 비율: 약 6:4 (Warm:Cool)**
Yan Ru 기준 7:3보다 한색이 약간 더 많음. 바이올렛과 민트가 시각적으로 더 존재감이 있으므로 실제 체감 비율은 적절함.

---

## 2. 메인 화면 씬 구조

```
[Layer 0] 2D 배경 일러스트
  ├─ Static Mesh Plane (Unlit Material)
  ├─ Texture: 배경 일러스트 (팔레트 색조에 맞춰 제작)
  └─ 라이팅 영향 없음 (Unlit)

[Layer 1] 3D VRM 캐릭터
  ├─ ToonEx Material (Lit)
  ├─ Skeletal Mesh + Idle Animation
  ├─ 시퀀서 바인딩 (KausCharacterSlot)
  └─ 전용 라이팅 적용

[Layer 2] Post Process Volume (Infinite Extent)
  ├─ Local Exposure
  ├─ Bloom (Convolution 권장)
  ├─ Color Grading
  └─ Lens Flare
```

---

## 3. Directional Light 설정 (3-Light Setup)

### 3-1. Key Light (주광)

| 파라미터 | 값 | 비고 |
|---------|-----|------|
| Rotation | Pitch -45°, Yaw 30° | 좌상단에서 우하단 방향 |
| Intensity | 8.0 ~ 10.0 lux | 캐릭터 위 밝은 영역 생성 |
| Light Color | RGB(240, 190, 170) | 소프트핑크와 페일옐로 혼합톤 |
| Temperature | 5200K | 약간 따뜻한 자연광 |
| Use Temperature | true | |
| Source Angle | 1.5° | 부드러운 반그림자 |
| Shadow Amount | 1.0 | |
| Cast Shadows | true | 캐릭터 그림자 생성 |
| Atmosphere Sun Light | false | 메인 화면 전용이므로 비활성 |

### 3-2. Fill Light (보조광 - 민트)

| 파라미터 | 값 | 비고 |
|---------|-----|------|
| Type | Directional Light | |
| Rotation | Pitch -20°, Yaw -120° | 캐릭터 우측 뒤에서 |
| Intensity | 2.0 ~ 3.0 lux | Key의 25~30% |
| Light Color | RGB(100, 210, 180) | 민트그린 톤 |
| Cast Shadows | false | 그림자 중복 방지 |
| Affect World | false | 캐릭터에만 영향 (Lighting Channel 분리) |

→ **역할**: 캐릭터의 그림자 면에 민트빛 반사를 넣어 입체감 강화 + 팔레트 색조 통합

### 3-3. Rim Light (림라이트 - 페일옐로)

| 파라미터 | 값 | 비고 |
|---------|-----|------|
| Type | Directional Light | |
| Rotation | Pitch -10°, Yaw 180° | 캐릭터 정면 뒤에서 |
| Intensity | 1.5 ~ 2.0 lux | 미세한 윤곽 강조 |
| Light Color | RGB(230, 215, 140) | 페일옐로 계열 |
| Cast Shadows | false | |
| Affect World | false | Lighting Channel 2 |

→ **역할**: 캐릭터 머리카락/어깨 가장자리에 따뜻한 빛 테두리 생성

---

## 4. Skylight 설정

| 파라미터 | 값 | 비고 |
|---------|-----|------|
| Intensity Scale | 1.8 | 기본값보다 높게 → 그림자 밝기 확보 |
| Light Color | RGB(140, 100, 190) | 바이올렛 톤 |
| Lower Hemisphere Color | RGB(180, 140, 200) | 약간 밝은 보라 |
| Real Time Capture | false | 메인 화면이므로 Cubemap 사용 |
| Source Type | Specified Cubemap | |
| Cubemap | 팔레트 톤에 맞춘 커스텀 HDRI 또는 단색 Cubemap |
| Cast Shadows | false | |

→ **결과**: 캐릭터의 모든 그림자가 바이올렛 톤을 띄게 됨. 2D 배경 일러스트의 그림자도 같은 바이올렛으로 그려야 통일감 확보.

---

## 5. Post Process Volume 설정

### 5-1. Exposure (노출)

```
Auto Exposure
  Method: Auto Exposure Histogram
  Min Brightness: 0.5
  Max Brightness: 2.0
  Exposure Compensation: +0.8    // 과노출로 투명한 느낌
  Speed Up: 3.0
  Speed Down: 1.0
```

### 5-2. Local Exposure (핵심)

```
Local Exposure
  Highlight Contrast: 0.75
  Shadow Contrast: 0.80          // 그림자를 밝게 들어올림
  Detail Strength: 0.92          // 약간 몽환적
  Blur Percent: 80.0             // 기본값 유지
  High Quality: true
  Middle Grey Bias: 0.0
```

→ **효과**: 다크네이비(#1A1A60)인 가장 어두운 그림자가 순흑으로 빠지지 않고 보라빛 그림자로 유지됨

### 5-3. Bloom

```
Bloom
  Method: Convolution             // Standard보다 권장
  Intensity: 1.8
  Threshold: -1.0                // 모든 밝기에서 미세하게 적용

  // Convolution 설정
  Convolution Size: 1.2
  Convolution Boost: -0.01
  Convolution Buffer Scale: 0.133
  Convolution Texture: 커스텀 Bokeh 텍스처 (원형 또는 별형)

  // Standard 사용 시 Tint 설정 (팔레트 반영)
  Bloom 1 Tint: RGB(240, 200, 210) × 0.35   // 라이트핑크 톤
  Bloom 2 Tint: RGB(230, 190, 200) × 0.14
  Bloom 3 Tint: RGB(220, 180, 210) × 0.12   // 약간의 라벤더
  Bloom 4 Tint: RGB(210, 170, 200) × 0.07
  Bloom 5 Tint: RGB(200, 160, 190) × 0.07
  Bloom 6 Tint: RGB(200, 160, 190) × 0.06
```

→ **효과**: Bloom이 핑크-라벤더 톤으로 물들어 화면 전체가 팔레트 색조 안에 머무름. 캐릭터 실루엣 가장자리가 부드럽게 번져 2D 배경과의 경계가 자연스럽게 녹아듦.

### 5-4. Color Grading

```
Color Grading
  // Global
  Global Saturation: (1.05, 1.0, 1.08, 1.0)   // R/B 채널 약간 강화
  Global Contrast:   (1.02, 1.0, 1.02, 1.0)
  Global Gamma:      (1.0, 1.0, 1.0, 1.0)
  Global Gain:       (1.0, 1.0, 1.0, 1.0)

  // Shadows (그림자 영역 → 바이올렛으로)
  Shadow Saturation:  (1.1, 0.9, 1.15, 1.0)    // R+, G-, B++ → 보라 톤
  Shadow Contrast:    (1.0, 1.0, 1.0, 1.0)
  Shadow Gamma:       (1.0, 0.98, 1.05, 1.0)
  Shadow Gain:        (1.0, 0.95, 1.08, 1.0)    // 그림자에 보라빛 추가
  Shadow Offset:      (0.005, 0.0, 0.01, 0.0)   // 미세한 보라 오프셋

  // Midtones (중간 밝기 → 소프트핑크-피치)
  Midtone Saturation: (1.05, 1.0, 1.02, 1.0)
  Midtone Gamma:      (1.02, 0.99, 1.0, 1.0)    // 약간 따뜻하게
  Midtone Gain:       (1.02, 1.0, 1.0, 1.0)

  // Highlights (밝은 영역 → 페일옐로-크림)
  Highlight Saturation: (1.0, 1.0, 0.95, 1.0)   // B 약간 감소 → 따뜻한 하이라이트
  Highlight Gain:       (1.02, 1.01, 0.98, 1.0)  // 크림빛 하이라이트

  // Misc
  Color Grading LUT Intensity: 0.0              // LUT 미사용 (수동 조정 우선)
  Blue Correction: 0.6
  Expand Gamut: 1.0

  // Film (톤 커브)
  Film Slope: 0.88
  Film Toe: 0.55
  Film Shoulder: 0.26
  Film Black Clip: 0.0
  Film White Clip: 0.04
```

### 5-5. Lens Flare

```
Lens Flare
  Intensity: 0.3                 // 미세하게
  Bokeh Size: 3.0
  Threshold: 4.0
  Bokeh Shape Texture: 커스텀 (별형 또는 하트형 — 서브컬처 톤)
  Tint: RGB(240, 200, 220)       // 라이트핑크

  // Light Leakage 시뮬레이션 (Yan Ru 기법)
  // Lens Flare 스케일을 키워서 사용
  // 또는 별도 Post Process Material에서 구현
```

### 5-6. Vignette

```
Vignette
  Intensity: 0.25                // 가장자리를 약간 어둡게
```

→ 화면 가장자리가 자연스럽게 어두워지면서 중앙의 캐릭터에 시선 집중

### 5-7. Chromatic Aberration

```
Chromatic Aberration
  Intensity: 0.15                // 극미세
  Start Offset: 0.0
```

→ 가장자리에 미세한 색수차로 카메라 렌즈 느낌 추가

---

## 6. 카메라 설정

| 파라미터 | 값 | 비고 |
|---------|-----|------|
| Projection | Perspective | |
| FOV | 30° ~ 40° | 낮은 FOV로 원근 왜곡 최소화 (2D 느낌) |
| Post Process Blend Weight | 1.0 | |

낮은 FOV가 핵심. 2D 배경 일러스트와 3D 캐릭터의 원근 차이를 최소화합니다. 캐릭터가 배경과 같은 "평면" 위에 있는 것처럼 보이게 됩니다.

---

## 7. 캐릭터 머티리얼 보정 (ToonEx + VRM)

ToonEx가 이미 NPR 셰이딩을 처리하므로, 팔레트와의 색 통일에 집중합니다:

| 항목 | 설정 | 비고 |
|------|------|------|
| Shadow Color | RGB(160, 110, 190) → 바이올렛 계열 | Skylight 그림자 색과 일치 |
| Highlight Color | RGB(255, 235, 225) → 크림핑크 | Key Light와 일치 |
| Outline Color | RGB(100, 60, 120) → 짙은 보라 | 배경 대비 자연스러운 윤곽 |
| Outline Width | 0.5 ~ 1.0px | Yan Ru 기법: 극미세 |
| Rim Light Color | 머티리얼에서 추가 시 민트그린 반영 | Fill Light와 일치 |

---

## 8. 2D 배경 일러스트 제작 가이드

배경 일러스트를 그리거나 선정할 때 다음을 준수해야 3D 캐릭터와 자연스럽게 합성됩니다:

1. **그림자 톤**: 바이올렛(#A060D0의 어두운 변형)으로 통일
2. **하이라이트 톤**: 페일옐로-크림(#E0D080 ~ #F0E0D0)
3. **난한색 비율**: 6:4 유지 (핑크/옐로 60%, 보라/민트 40%)
4. **최소 밝기**: 가장 어두운 영역도 #1A1A60(다크네이비) 이하로 내려가지 않음
5. **Bloom 호환**: 밝은 영역 주변에 여유 공간을 둘 것 (Bloom이 번질 공간)
6. **캐릭터 배치 영역**: 중앙~우측에 여백을 두어 캐릭터가 서는 자리 확보

---

## 9. Niagara 파티클 (선택사항)

배경에 생동감을 추가하는 미세 파티클:

| 파티클 | 색상 | 비고 |
|--------|------|------|
| 빛 입자 (Dust Mote) | #F0E0F0 (라이트라벤더) | 느리게 부유, 크기 2~4px |
| 반짝임 (Sparkle) | #E0D080 (페일옐로) | 간헐적 점멸 |
| 꽃잎 / 깃털 | #F0A0C0 (소프트핑크) | 서브컬처 톤에 맞는 효과 |

→ Emissive Material 사용, Bloom과 자연스럽게 반응하여 빛나는 효과 생성

---

## 10. 구현 순서

1. **메인 화면 전용 레벨** 생성
2. **카메라** 배치 (FOV 35°, 고정 위치)
3. **2D 배경 Plane** 배치 (카메라 뒤쪽, Unlit Material)
4. **캐릭터 스폰** (KausCharacterSlot 시퀀서 바인딩)
5. **Key Light** 설정 → 캐릭터 기본 음영 확인
6. **Skylight** 설정 → 그림자 색 바이올렛 확인
7. **Fill Light + Rim Light** 추가 → 민트/옐로 톤 확인
8. **Post Process Volume** 설정 (이 문서의 5장 전체)
9. **캐릭터 머티리얼** 보정 (7장)
10. **Niagara 파티클** 추가 (선택)
11. **A/B 테스트**: Convolution Bloom vs Standard Bloom 비교
12. **최종 조정**: 2D 배경과 3D 캐릭터의 색조 일치 미세 조정
