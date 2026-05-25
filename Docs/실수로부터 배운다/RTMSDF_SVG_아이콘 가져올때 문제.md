# RTMSDF + SVG 트러블슈팅 메모

> Project Kaus / UE 5.5.4 / RTMSDF 플러그인

## 증상

- SVG를 import → MSDF 텍스처는 생성됨
- 머티리얼에 적용해도 **아무것도 렌더링되지 않음** (빈 사각형)
- 어떤 SVG는 정상, 어떤 SVG는 안 됨

## 원인

**RTMSDF는 닫힌 fill geometry만 거리장으로 변환할 수 있다.**

MSDF/SDF는 "안과 밖"의 거리를 계산하는 방식. 입력 도형에 면적(area)이 없으면 거리장이 평탄하게 나와서 임계값 처리 후 빈 결과가 된다.

### 문제가 되는 SVG 패턴

| 패턴 | 예시 | 결과 |
|------|------|------|
| stroke 기반 라인 | `<path stroke="..." fill="none">` | ❌ 면적 없음 |
| `<line>` 요소 | `<line x1=".."/>` | ❌ 1차원 |
| open path | `M5 7H19` (Z 없음) | ❌ 닫히지 않음 |
| 변환 안 된 텍스트 | `<text>` | ❌ 폰트 outline 필요 |
| gradient/filter 등 | `<linearGradient>` | ❌ 미지원 |

### 정상 작동하는 SVG 패턴

- `fill` 지정된 닫힌 `<path>` (Z로 종료)
- `<rect>`, `<circle>`, `<polygon>` 등 닫힌 primitive
- `stroke`가 outline 처리되어 fill 도형으로 변환된 path

## 진단

import 후 텍스처 에셋을 열어본다:
- 균일한 mid-gray 한 장 → geometry 문제 (면적 없음)
- 미세한 패턴은 보이는데 머티리얼에서 안 보임 → 임계값/UV 문제 (별도 케이스)

## 해결: stroke → fill 변환

### Figma

1. 대상 line/path 선택
2. `Object → Outline Stroke` (`Cmd/Ctrl + Shift + O`)
3. Export 후 SVG 코드 검수: `stroke=` 사라지고 `fill=`만 남으면 OK

⚠️ Outline Stroke는 파괴적 작업. 원본은 별도 백업.

### Inkscape

`Path → Stroke to Path` (`Ctrl + Alt + C`)

### Illustrator

`Object → Path → Outline Stroke`

### 직접 작성 (햄버거 아이콘 예시)

**Before (stroke 기반, RTMSDF 실패):**
```svg
<path d="M5 7H19" stroke="#33363F" stroke-width="2" stroke-linecap="round"/>
<path d="M5 12H19" stroke="#33363F" stroke-width="2" stroke-linecap="round"/>
<path d="M5 17H19" stroke="#33363F" stroke-width="2" stroke-linecap="round"/>
```

**After (fill 기반, RTMSDF 정상):**
```svg
<rect x="4" y="6" width="16" height="2" rx="1" fill="#33363F"/>
<rect x="4" y="11" width="16" height="2" rx="1" fill="#33363F"/>
<rect x="4" y="16" width="16" height="2" rx="1" fill="#33363F"/>
```

`rx`가 `stroke-linecap="round"`를 대체.

## 텍스처 설정에 대한 오해

RTMSDF의 Distance Field Width, Channel 등 **텍스처 설정 조정으로는 해결 안 됨**. 입력 geometry에 면적이 없으면 거리장 자체가 생성되지 않기 때문. 텍스처 설정은 이미 생성된 SDF의 표현을 제어할 뿐이다.

## SVG 검수 체크리스트 (import 전)

- [ ] 모든 시각 요소가 `fill`로 표현되는가
- [ ] `stroke` 속성이 남아있다면 outline 변환됐는가
- [ ] `<text>`는 path로 변환됐는가
- [ ] 모든 path가 `Z`로 닫혀있는가
- [ ] gradient, filter, mask 등 고급 요소 제거됐는가

## 플러그인 분기 전략

- **RTMSDF**: UI 아이콘, 로고, 단순 글리프 (fill 기반)
- **SVGImporter**: 복잡한 일러스트레이션, stroke 보존 필요 시 — vector geometry로 보존하므로 stroke 케이스에 적합

---

*작성: 2026-05-10 / 햄버거 메뉴 아이콘 케이스 분석에서 도출*
