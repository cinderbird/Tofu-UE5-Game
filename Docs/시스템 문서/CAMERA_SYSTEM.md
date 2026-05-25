# Kaus 카메라 시스템 문서

> 대상 독자: 카메라 모드를 추가·튜닝할 프로그래머, 카메라 동작을 디버깅해야 할 기술기획
> 위치: `Source/Kaus/Camera/` (+ `Source/Kaus/Pawn/KausPawnExtensionComponent`)
> 원형: Epic Lyra의 Camera 시스템(CameraMode 스택)을 기반으로 Kaus 프로젝트에 맞춰 수정·확장

---

## 1. 한 줄 요약

카메라 모드(한 프레임의 View를 계산하는 객체)를 **스택에 쌓아 블렌딩**한다.
"어떤 모드를 쓸지"는 **Pawn 측**이 결정하고, "그 모드에 어떻게 입력할지"는 **별도의 CameraInput 컴포넌트**가 결정한다.

Lyra 원형 대비 핵심 변형 두 가지가 있다.

| 구분 | Lyra | Kaus |
|------|------|------|
| 카메라 입력의 소속 | PawnExtension(Hero) 내부에 Look/Move/Camera 입력이 함께 묶여 있음 | **카메라 모드별로 별도 `UActorComponent`** (`UKausZZZCameraInputComponent` 등)로 분리 |
| 모드 종류 | ThirdPerson 위주 | ThirdPerson + **ZZZ + Observer** |

CameraInput을 분리한 이유는 한 캐릭터가 여러 카메라 모드를 토글하면서 모드마다 입력 셋이 완전히 다르기 때문이다. 모드별 InputComponent를 부착/탈착하는 방식이 PawnExtension에 모두 우겨넣는 것보다 깔끔하다.

---

## 2. 전체 구조

크게 다섯 영역으로 구성된다.

| 영역 | 대표 클래스 | 책임 |
|------|-------------|------|
| Player Camera Manager | `AKausPlayerCameraManager` + `UKausUICameraManagerComponent` | 엔진과의 접점. UI 우선순위 처리 |
| Camera Component & Stack | `UKausCameraComponent`, `UKausCameraModeStack` | Pawn에 붙는 카메라. 모드 스택 보유, 블렌딩 |
| Camera Modes | `UKausCameraMode` 및 파생 (`_ThirdPerson` / `_ZZZ` / `_Observer`) | 한 프레임의 View(위치·회전·FOV)를 계산 |
| Camera Input Components | `UKausZZZCameraInputComponent`, `UKausThirdPersonCameraInputComponent` | InputTag를 받아 활성 모드의 공개 API를 호출 (얇은 어댑터) |
| Pawn-side Mode Resolver | `UKausPawnExtensionComponent` 및 파생 | "지금 어떤 모드를 쓸지" 결정 |

다섯 영역은 서로 직접 참조하지 않고 **델리게이트(`DetermineCameraModeDelegate`)** 와 **모드 인스턴스 검색(`GetCameraModeInstance<T>()`)** 두 가지 경로로만 연결된다. 즉 Pawn은 모드 클래스만 알면 되고, Input 컴포넌트는 모드 인스턴스의 공개 API만 알면 된다.

### 2.1 한 프레임의 데이터 흐름

```
[입력 단]
  HW 입력
    ↓ Enhanced Input + UKausInputComponent
  InputTag (예: InputTag.Camera.ZZZ.Look)
    ↓ BindNativeAction
[입력 어댑터 단]
  UKausZZZCameraInputComponent::Input_Look()
    ↓ GetTargetCameraMode<UKausCameraMode_ZZZ>()
    ↓ Mode->AddLookInput(Value)
[모드 단]
  Mode_ZZZ: TargetYaw / TargetPitch / TargetArmLength 등 Target 변수 갱신
    ↓ (다음 Tick에서)
  Mode_ZZZ::UpdateView(DeltaTime)
    Current 변수 ← FInterpTo(Current, Target, ...)
    View.Location / Rotation / FOV / ControlRotation 채움
    UpdatePreventPenetration() 으로 View.Location 보정
[블렌딩 단]
  UKausCameraModeStack::EvaluateStack(DeltaTime, OutView)
    ├─ UpdateStack: 각 모드 UpdateCameraMode (UpdateView + UpdateBlending)
    └─ BlendStack: 스택 바닥에서 위로 FKausCameraModeView::Blend 누적
[출력 단]
  UKausCameraComponent::GetCameraView()
    PlayerController.SetControlRotation(View.ControlRotation)
    SetWorldLocationAndRotation(View.Location, View.Rotation)
    DesiredView 채워 반환
    ↓
  AKausPlayerCameraManager::UpdateViewTarget()
    UI Camera가 우선이면 그쪽이 덮어씀
```

### 2.2 모드 전환 흐름

모드 전환은 두 가지 경로가 있고, 우선순위는 `UKausPawnExtensionComponent::DetermineCameraMode()`가 결정한다.

```
경로 A — Pawn 측 토글 (사용자가 키로 전환)
  Input_CameraSwitch_ZZZAndThirdPerson()
    → ToggleCameraState() 로 CurrentCameraState 변경
    → 다음 프레임, CameraComponent가 DetermineCameraModeDelegate 호출
    → UKausPlayerUnitComponent::DetermineCameraMode() 가 새 모드 클래스 반환
    → ModeStack.PushCameraMode() → BlendTime 동안 자연 블렌딩

경로 B — Ability 측 푸시 (어빌리티 시전 중 카메라 강제)
  GA의 SetCameraMode(NewMode)
    → PawnExtension.SetAbilityCameraMode(NewMode, SpecHandle)
    → DetermineCameraMode() 가 NewMode 반환 (Ability가 최우선)
  GA 종료 시
    → PawnExtension.ClearAbilityCameraMode(SpecHandle)
    → 다시 Persistent / Default 모드로 복귀

우선순위 (UKausPawnExtensionComponent::DetermineCameraMode 기본 구현):
  AbilityCameraMode > PersistentCameraMode > DefaultCameraMode

  └ 단, 파생 클래스가 override하면 자체 규칙을 우선 적용한다.
    UKausPlayerUnitComponent는 base를 호출하지 않고 CurrentCameraState로 결정.
    UKausObserverUnitComponent는 Super를 먼저 호출해 base 결과를 우선시.
```

---

## 3. 카메라 코어 레퍼런스 (Lyra 원형 영역)

이 절의 클래스들은 Lyra와 거의 동일하다. 동작 원리는 Lyra 문서가 더 자세하므로 여기서는 Kaus에서 자주 만지는 진입점 위주로 정리한다.

### 3.1 `AKausPlayerCameraManager`

**파일**: `KausPlayerCameraManager.h/.cpp`
**역할**: 엔진의 `APlayerCameraManager`를 상속받은 프로젝트 표준 카메라 매니저. `UKausUICameraManagerComponent`를 자식 서브오브젝트로 보유한다.

#### 주요 동작

- `UpdateViewTarget` — `UICamera->NeedsToUpdateViewTarget()`이 true면 UI 측이 먼저 갱신한 다음 일반 카메라 처리를 따라간다. UI가 카메라를 점유해야 하는 시점(다이얼로그/컷씬 등)에 사용한다.
- `DisplayDebug` — `showdebug Camera` 시 Pawn에 붙은 `UKausCameraComponent::DrawDebug`를 호출.

#### 상수 (`KausPlayerCameraManager.h`)

```cpp
#define KAUS_CAMERA_DEFAULT_FOV         (80.0f)
#define KAUS_CAMERA_DEFAULT_PITCH_MIN   (-89.0f)
#define KAUS_CAMERA_DEFAULT_PITCH_MAX   (89.0f)
```

생성자에서 `DefaultFOV/ViewPitchMin/ViewPitchMax`를 위 값으로 초기화한다. 카메라 모드의 기본값도 동일한 매크로를 쓴다.

### 3.2 `UKausUICameraManagerComponent`

**파일**: `KausUICameraManagerComponent.h`
**역할**: UI 컨텍스트에서 카메라를 잠시 점유할 때 사용하는 컴포넌트. `Within=KausPlayerCameraManager`로 선언되어 매니저 안에서만 존재한다.

#### 주요 함수

```cpp
SetViewTarget(AActor*, FViewTargetTransitionParams)  // UI가 잡고 싶은 ViewTarget 지정
NeedsToUpdateViewTarget()                            // 잡힌 게 있고 갱신 필요한지
UpdateViewTarget(FTViewTarget&, float)               // 실제 갱신 (매니저가 호출)
```

플레이어 컨트롤러에서 `GetComponent(PC)`로 가져온다.

### 3.3 `UKausCameraComponent`

**파일**: `KausCameraComponent.h/.cpp`
**역할**: Pawn에 붙는 카메라 컴포넌트. `UCameraComponent`를 상속받았고, 내부에 모드 스택을 보유한다. 카메라 시스템의 사실상 진입점이며, 다른 시스템은 `FindCameraComponent(Actor)`로 이 컴포넌트를 찾아 모드를 조회/푸시한다.

#### 정적 헬퍼

```cpp
static UKausCameraComponent* FindCameraComponent(const AActor* Actor);
```

`Actor->FindComponentByClass<UKausCameraComponent>()`의 한 줄 래퍼. 전 시스템에서 카메라에 접근하는 표준 경로다.

#### 주요 변수

| 변수 | 의미 |
|------|------|
| `CameraModeStack` | `UKausCameraModeStack*`. `OnRegister`에서 `NewObject`로 1회 생성 |
| `DetermineCameraModeDelegate` | `FKausCameraModeDelegate`. 매 프레임 어떤 클래스를 푸시할지 묻는 콜백. **Pawn 측 컴포넌트가 바인딩**한다 |
| `FieldOfViewOffset` | 단일 프레임용 FOV 오프셋. `AddFieldOfViewOffset`으로 누적, `GetCameraView`에서 적용 후 0으로 리셋 |

#### 주요 함수

```cpp
GetCameraView(DeltaTime, OutDesiredView)
  // 1) UpdateCameraModes() → 델리게이트로 새 클래스 받아 Push
  // 2) ModeStack->EvaluateStack(DeltaTime, OutView)
  // 3) PC.SetControlRotation(OutView.ControlRotation)
  // 4) FOV에 단발 오프셋 더하기 → 컴포넌트 트랜스폼/FOV 갱신
  // 5) DesiredView (FMinimalViewInfo) 채워서 반환

PushCameraMode(TSubclassOf CameraModeClass)
  // 외부에서 직접 모드를 푸시할 때 사용. (Ability가 우회로 쓸 수 있다)

template  T* GetCameraModeInstance() const
  // CameraInput 컴포넌트가 활성/대기 중인 모드 인스턴스를 찾을 때 사용.
  // 스택이 아니라 ModeInstances 배열에서 클래스로 검색.

GetBlendInfo(OutWeightOfTopLayer, OutTagOfTopLayer)
  // 최상단 모드의 BlendWeight와 CameraTypeTag를 가져온다.
```

### 3.4 `FKausCameraModeView`

**파일**: `KausCameraMode.h`
**역할**: 블렌딩의 최소 단위 구조체. 한 모드가 한 프레임에 만들어내는 카메라 상태.

| 필드 | 의미 |
|------|------|
| `Location` | 카메라 월드 좌표 |
| `Rotation` | 카메라 월드 회전 |
| `ControlRotation` | 컨트롤러에 반영할 회전. 대부분 `Rotation`과 동기화 |
| `FieldOfView` | FOV(°) |

`Blend(Other, OtherWeight)` — Other 비중에 따라 자기를 갱신한다. 회전은 `(Other - Self).GetNormalized()`로 델타를 정규화한 뒤 가중치만큼 더한다. 0과 360 경계에서 자연스럽게 짧은 길로 회전.

### 3.5 `UKausCameraMode` (Abstract, NotBlueprintable)

**파일**: `KausCameraMode.h/.cpp`
**역할**: 한 카메라 모드의 모든 상태와 보간을 담당. 직접 인스턴스화하지 않고 항상 파생 클래스를 만든다.

#### 주요 변수 (베이스 클래스 차원에서 노출되는 것)

| 변수 | 카테고리 | 의미 |
|------|----------|------|
| `CameraTypeTag` | Blending | GameplayTag. 게임플레이 코드가 "지금 어떤 종류의 카메라가 활성인지" 묻기 위함. `TAG_Camera_Mode_ThirdPerson` 등 |
| `View` | (런타임) | 모드가 만들어내는 출력 (`FKausCameraModeView`) |
| `FieldOfView` | View | 기본 FOV. 모드별로 override할 수 있다 |
| `ViewPitchMin/Max` | View | 피치 클램프 범위 |
| `BlendTime` | Blending | 이 모드로 블렌드 인 되는 시간(초). 기본 0.5 |
| `BlendFunction` | Blending | `EKausCameraModeBlendFunction` (Linear / EaseIn / EaseOut / EaseInOut) |
| `BlendExponent` | Blending | Ease 곡선의 계수. 기본 4.0 |
| `BlendAlpha`, `BlendWeight` | (런타임) | Alpha는 선형 진행도, Weight는 BlendFunction 적용 결과 |
| `CameraMappingContext` | Input | 모드가 활성될 때 자동으로 추가될 IMC |
| `InputMappingPriority` | Input | IMC priority. 기본 100 (캐릭터 기본 매핑의 0보다 위로 덮어쓰는 의도) |
| `bResetInterpolation` | (transient) | 한 프레임만 살아있는 보간 리셋 플래그 |

#### 주요 가상함수 (파생에서 override)

```cpp
virtual void UpdateView(float DeltaTime);
  // 모드의 메인 계산. View 구조체를 채우는 책임.
  // 베이스 구현은 PivotLocation/Rotation을 그대로 받아 View에 넣는 단순 동기화.

virtual void UpdateBlending(float DeltaTime);
  // BlendAlpha를 DeltaTime/BlendTime 만큼 진행시키고
  // BlendFunction 적용해 BlendWeight 산출.

virtual void OnActivation();
virtual void OnDeactivation();
  // 스택의 활성 모드가 될 때 / 빠질 때.
  // 베이스 구현은 CameraMappingContext를 EnhancedInputSubsystem에 add/remove.

virtual FVector GetPivotLocation() const;
virtual FRotator GetPivotRotation() const;
  // 모드 계산의 기준점.
  // 베이스: TargetActor가 Character면 (HalfHeight 보정 + BaseEyeHeight) 적용한 위치,
  //         Pawn이면 GetPawnViewLocation(), 그 외 GetActorLocation().
```

#### 주요 비-가상 함수

```cpp
GetTargetActor()             // CameraComponent의 GetTargetActor() (보통 Owner Pawn)
GetCameraModeView()          // 마지막 UpdateView 결과
UpdateCameraMode(DeltaTime)  // UpdateView + UpdateBlending을 한 번에 (Stack이 호출)
SetBlendWeight(Weight)       // Weight를 직접 지정 (역산으로 Alpha까지 맞춤)
GetCameraTypeTag()           // CameraTypeTag 반환
GetEnhancedInputSubsystem()  // TargetActor의 LocalPlayer Subsystem (IMC 등록용)
```

### 3.6 `UKausCameraModeStack`

**파일**: `KausCameraMode.h/.cpp`
**역할**: 모드들을 스택으로 쌓고 블렌딩한다. `UKausCameraComponent`가 1:1로 소유한다.

#### 내부 자료구조

```cpp
TArray<TObjectPtr> CameraModeInstances;  // 캐싱: 클래스당 한 인스턴스
TArray<TObjectPtr> CameraModeStack;      // 활성 스택 (0번이 최상단)
bool bIsActive;
```

`CameraModeInstances`는 한 번 만들어진 모드 인스턴스를 재사용하기 위한 캐시다. **같은 클래스의 모드는 항상 같은 인스턴스를 쓰므로, 모드 간 전환을 반복해도 내부 상태(예: TargetYaw, CurrentArmLength)가 보존된다.**

#### 주요 함수

```cpp
PushCameraMode(TSubclassOf)
  // 1) GetCameraModeInstance로 캐시 인스턴스 가져옴
  // 2) 이미 최상단이면 노옵
  // 3) 스택 중간에 같은 모드가 있으면 위에 있는 모드들의 "잔여 contribution"을
  //    곱해 그 가중치를 시작 BlendWeight로 삼고 → 빼서 → 최상단에 다시 삽입
  // 4) 스택 바닥은 항상 BlendWeight = 1.0 강제 (배경 모드)
  // 5) 새로 들어가는 경우 OnActivation 호출

EvaluateStack(DeltaTime, OutCameraModeView) → bool
  // bIsActive면 UpdateStack → BlendStack 순으로 실행
  // 비활성이면 false 반환

UpdateStack(DeltaTime) [protected]
  // 각 모드의 UpdateCameraMode 호출
  // BlendWeight >= 1.0 인 모드를 발견하면 그 아래는 전부 제거(OnDeactivation 후)

BlendStack(OutView) [protected]
  // 바닥부터 위로 올라가며 Blend (Other = 위 모드, OtherWeight = 위 모드 weight)

GetCameraModeInstance(TSubclassOf) → UKausCameraMode*
  // 캐시에 있으면 그것, 없으면 NewObject로 생성하고 캐시에 추가
  // CameraComponent의 GetCameraModeInstance도 내부적으로 이걸 부른다

template  T* FindCameraModeByClass() const
  // CameraInput 컴포넌트가 호출하는 검색 함수
  // 스택이 아니라 ModeInstances 배열에서 캐스트 가능한 첫 인스턴스 반환
```

### 3.7 `FKausPenetrationAvoidanceFeeler`

**파일**: `KausPenetrationAvoidanceFeeler.h`
**역할**: 카메라 관통 회피용 feeler ray 한 가닥의 정의. 모드의 `PenetrationAvoidanceFeelers` 배열에 채워 사용한다.

| 필드 | 의미 |
|------|------|
| `AdjustmentRot` | 메인 광선에서 얼마나 비틀어 쏠지(Pitch/Yaw 델타) |
| `WorldWeight` | 월드(static) 충돌 시 결과 기여 가중치 |
| `PawnWeight` | Pawn 충돌 시 결과 기여 가중치. 0이면 Pawn은 무시 |
| `Extent` | Sphere sweep 반경 |
| `TraceInterval` | 미스한 경우 다음 트레이스까지 쉴 프레임 수 (성능 최적화) |
| `FramesUntilNextTrace` | (transient) 남은 휴식 프레임 |

**관습**: 배열의 인덱스 0은 메인 회피용, 1+ 는 predictive 회피용. `bDoPredictiveAvoidance=false`면 인덱스 0만 사용된다.

### 3.8 `IKausCameraAssistInterface`

**파일**: `KausCameraAssistInterface.h`
**역할**: 카메라 관통 회피를 보조하기 위해 ViewTarget / Controller / 다른 Actor가 구현할 수 있는 인터페이스.

```cpp
GetIgnoredActorsForCameraPentration(OutActorsAllowPenetration)
  // 트레이스에서 무시할 액터 목록 (예: 탑승 차량, 시야 안의 동료들)

GetCameraPreventPenetrationTarget() → TOptional
  // ViewTarget이 아닌 다른 액터를 관통 회피 기준으로 쓰고 싶을 때.
  // 예: 카메라가 따라가는 본질적 대상은 캐릭터지만, 시각적으로 유지하고 싶은 건 그 위의 마운트.

OnCameraPenetratingTarget()
  // 카메라가 ReportPenetrationPercent 이하로 너무 가까이 밀려들었을 때 호출.
  // 캐릭터 메시 페이드아웃 같은 처리에 사용.
```

ThirdPerson/ZZZ 모드 양쪽이 `PreventCameraPenetration` 내부에서 TargetController / TargetActor / PPActor 세 곳을 모두 캐스팅해 이 인터페이스를 호출한다.

---

## 4. 구체 카메라 모드

세 종이 있다. ThirdPerson은 Lyra와 유사하지만 Curve 의존을 걷어냈고, ZZZ와 Observer는 Kaus 신규다.

### 4.1 `UKausCameraMode_ThirdPerson`

**파일**: `KausCameraMode_ThirdPerson.h/.cpp`
**역할**: 일반적인 3인칭 추적 카메라. 마우스/스틱 Look으로 회전, 캐릭터 뒤에 ArmLength만큼 떨어진 위치에 자리잡는다.

#### 공개 API

```cpp
void AddLookInput(FVector2D LookInput);
  // X → TargetYaw, Y → TargetPitch에 누적. Pitch는 [MinPitch, MaxPitch] 클램프.
```

이게 외부(ThirdPersonCameraInputComponent)가 호출하는 유일한 함수다. 단순한 모드라서 이거 하나면 충분하다.

#### 설정 변수

| 카테고리 | 변수 | 기본값 / 의미 |
|----------|------|---------------|
| Collision | `PenetrationBlendInTime` | 0.1초. 관통 회피 보간 들어가는 시간 |
| Collision | `PenetrationBlendOutTime` | 0.15초. 빠져나오는 시간 |
| Collision | `bPreventPenetration` | true. 관통 회피 자체를 끌 수 있음 |
| Collision | `bDoPredictiveAvoidance` | true. feeler 1+ 인덱스 사용 여부 |
| Collision | `CollisionPushOutDistance` | 2cm. 충돌면에서 추가로 밀어내는 거리 |
| Collision | `ReportPenetrationPercent` | 0. 이 비율 이하로 밀려들면 `OnCameraPenetratingTarget` 호출 |
| Collision | `PenetrationAvoidanceFeelers` | feeler 배열. 인덱스 0이 메인 |
| Third Person | `CrouchOffsetBlendMultiplier` | 5.0. 크라우치 오프셋 보간 속도 배수 |
| Third Person\|Zoom | `DefaultArmLength` | 1000. 카메라 거리 기본값 |
| Third Person\|Zoom | `MinArmLength` / `MaxArmLength` | 300 / 2000. ArmLength 클램프 |
| Third Person\|Rotation | `RotationInterpSpeed` | 10. Yaw/Pitch FInterpTo 속도 |
| Third Person\|Rotation | `LookSpeedX` / `LookSpeedY` | 2.0 / 2.0. 마우스 입력 → 각도 변환 계수 |
| Third Person\|Rotation | `MinPitch` / `MaxPitch` | -85 / -5. Pitch 클램프 |

#### 런타임 상태 변수

```cpp
float TargetYaw, CurrentYaw;
float TargetPitch, CurrentPitch;
float TargetArmLength, CurrentArmLength;
FVector InitialCrouchOffset, TargetCrouchOffset, CurrentCrouchOffset;
float CrouchOffsetBlendPct;
```

Target은 입력으로 갱신되고, Current는 매 프레임 Target으로 FInterpTo된다. 분리된 이유는 입력의 즉시성과 카메라의 부드러움을 동시에 만족하기 위해서다.

#### 동작 흐름 (`UpdateView`)

1. `UpdateForTarget(DeltaTime)` — Character인 경우 크라우치 상태에 따라 `SetTargetCrouchOffset` 호출
2. `UpdateCrouchOffset(DeltaTime)` — Initial/Target 사이를 `CrouchOffsetBlendMultiplier` 속도로 블렌딩
3. Pivot 위치 계산 (`GetPivotLocation` + CurrentCrouchOffset)
4. Yaw/Pitch/ArmLength를 Target으로 FInterpTo
5. `ViewLocation = PivotLocation - (PivotRotation.Vector() * CurrentArmLength)`
6. `View.Location/Rotation/ControlRotation/FieldOfView` 채움 (FOV는 90 고정 — TODO: 변수화)
7. `UpdatePreventPenetration(DeltaTime)` — feeler trace로 ViewLocation을 장애물 앞으로 끌어옴

#### OnActivation / OnDeactivation

```cpp
OnActivation():
  Super::OnActivation();  // CameraMappingContext 등록
  TargetPawn->bUseControllerRotationYaw = false;
  TargetYaw   = CurrentYaw   = PawnViewRot.Yaw;
  TargetPitch = CurrentPitch = PawnViewRot.Pitch;
  TargetArmLength = CurrentArmLength = DefaultArmLength;
```

활성 시 Pawn의 ControllerYaw 직접 적용을 끄고 카메라가 Yaw를 주도하도록 한다. 비활성 시 원복하는 코드는 주석 처리되어 있다 — 다른 카메라가 받아 그 모드가 알아서 설정하기 때문이다.

#### Lyra와의 차이

Lyra의 `ULyraCameraMode_ThirdPerson`은 `UCurveVector` 기반으로 ArmLength·Yaw·Pitch를 곡선으로 받지만, Kaus는 그걸 걷어내고 모두 `FInterpTo`로 단순화했다. 디자이너 파라미터만으로 튜닝할 수 있다는 점이 장점, 곡선으로 표현 가능한 비선형 변화는 포기했다는 점이 단점.

### 4.2 `UKausCameraMode_ZZZ`

**파일**: `KausCameraMode_ZZZ.h/.cpp`
**역할**: 젠레스 존 제로 풍의 카메라 — 캐릭터를 중심으로 한 3인칭이지만 ① 카메라 이동(Move) 입력으로 PivotOffset을 직접 움직일 수 있고, ② 회전이 Snap(고정 각도) 기반이고, ③ Zoom과 Look이 별도로 분리된 형태.

#### 공개 API

```cpp
void AddMoveInput(FVector2D MoveInput);
  // 카메라 자체를 옆/위아래로 이동 (PivotOffset의 Y/Z에 누적)
  // MovementBoundsX, MovementBoundsY로 클램프

void AddZoomInput(float ZoomAmount);
  // ArmLength 변경. + 면 가까이, - 면 멀리

void AddRotationStep(float Direction);
  // +1 = 오른쪽 RotationStepAngle도 만큼 Snap 회전, -1 = 왼쪽
  // 현재 TargetYaw를 RotationStepAngle 단위로 라운드한 뒤 한 칸 이동

void AddLookInput(FVector2D LookInput);
  // 마우스 X → TargetYaw 누적, Y → TargetPitch 누적 (클램프)

void ResetCamera();
  // PivotOffset/ArmLength 초기화. Pitch는 -45°로.
```

다섯 종류 입력을 받는다는 점에서 ThirdPerson과 본질적으로 다르다 — 그래서 입력 컴포넌트도 별개다.

#### 설정 변수 (카테고리별 요약)

| 카테고리 | 대표 변수 | 의미 |
|----------|-----------|------|
| ZZZ\|Movement | `MoveSpeed` (10) | Move 입력 한 단위가 만드는 PivotOffset 델타 |
| ZZZ\|Movement | `MovementBoundsX`, `MovementBoundsY` | PivotOffset의 Y/Z 클램프 박스 |
| ZZZ\|Zoom | `DefaultArmLength` (1000), `MinArmLength` (300), `MaxArmLength` (2000) | 거리 기본/최소/최대 |
| ZZZ\|Zoom | `ZoomSpeed` (100) | Zoom 입력 한 단위가 만드는 ArmLength 델타 |
| ZZZ\|Rotation | `RotationStepAngle` (45) | Snap 회전 단위(도) |
| ZZZ\|Rotation | `RotationInterpSpeed` (10) | Yaw 보간 속도 |
| ZZZ\|Rotation | `LookSpeedX`, `LookSpeedY` (2/2) | 마우스 입력 → 각도 계수 |
| ZZZ\|Rotation | `MinPitch` (-85), `MaxPitch` (-5) | Pitch 클램프 |
| ZZZ\|Crouch | `CrouchOffsetBlendMultiplier` (5) | 크라우치 오프셋 블렌딩 |
| ZZZ\|Collision | (ThirdPerson과 동일한 7종) | 관통 회피 설정 |

#### 런타임 상태 변수

```cpp
FVector TargetPivotOffset, CurrentPivotOffset;
float TargetYaw, CurrentYaw;
float TargetArmLength, CurrentArmLength;
float TargetPitch, CurrentPitch;
FVector InitialCrouchOffset, TargetCrouchOffset, CurrentCrouchOffset;
float CrouchOffsetBlendPct;
```

#### 동작 흐름 (`UpdateView`)

```
PivotLocation  = GetPivotLocation()   (캐릭터 위치 + 눈높이 등)
PivotRotation  = (CurrentPitch, CurrentYaw, 0)
RotatedOffset  = PivotRotation.RotateVector(CurrentPivotOffset)

View.Location  = PivotLocation + RotatedOffset
View.Rotation  = PivotRotation
View.Location -= View.Rotation.Vector() * CurrentArmLength   // 뒤로 빼기
View.FieldOfView = 90.0f
View.ControlRotation = View.Rotation

UpdatePreventPenetration(DeltaTime)
```

ThirdPerson과의 핵심 차이는 `PivotOffset`이라는 추가 변환 단계가 있다는 것이다 — 카메라가 캐릭터를 따라가되, 그 캐릭터에서 좌/우/상/하로 떨어진 지점을 중심점으로 쓸 수 있다.

### 4.3 `UKausCameraMode_Observer`

**파일**: `KausCameraMode_Observer.h/.cpp`
**역할**: 관찰자(탑다운/오버뷰)용. `ObserverUnitComponent`의 입력값(회전 각도, 줌 거리)을 카메라 트랜스폼에 매핑한다. 줌 값을 Pitch와 FOV에도 동시에 반영해, 멀리 볼수록 더 위에서 내려다보는 시점을 만든다.

#### 설정 변수

| 카테고리 | 변수 | 의미 |
|----------|------|------|
| Kaus\|Observer | `DefaultPitch` (-45) | 기본 내려다보는 각도 |
| Kaus\|Observer | `ZoomInterpSpeed` (10) | 줌 보간 속도 |
| Kaus\|Observer | `RotationInterpSpeed` (8) | 회전 보간 속도 |
| Kaus\|Observer | `LocationInterpSpeed` (10) | 위치 추적 보간 속도 |
| Kaus\|Observer | `ZoomToPitchCurve` | 줌(0~1 정규화) → Pitch 보정 |
| Kaus\|Observer\|FOV | `ZoomToFOVCurve` | 줌 → FOV |
| Kaus\|Observer\|FOV | `DefaultFOV` (90) | 곡선이 비어있을 때의 fallback |
| Kaus\|Observer\|FOV | `FOVInterpSpeed` (10) | FOV 보간 속도 |

#### 런타임 상태 변수

```cpp
float CurrentDistance, CurrentYaw, CurrentFOV;
FVector CurrentPivotLocation;
```

#### 특이점

ThirdPerson/ZZZ가 자신의 Target 변수를 입력으로 직접 갱신하는 반면, Observer는 **외부 컴포넌트(`ObserverUnitComponent`)가 보유한 Yaw/Zoom을 매 프레임 참조해 보간**한다. 그래서 별도의 `Add*Input` API가 없다 — 입력은 `ObserverUnitComponent`가 직접 받아 자기 상태에 저장하고, Observer 모드는 그 상태를 조회해 카메라로 옮긴다.

이 모드는 Kaus의 분리 원칙(Mode = 계산, Input = 어댑터)의 변형 사례다. ObserverUnitComponent가 입력 처리 + 상태 보유 두 역할을 함께 맡기 때문에 별도 CameraInputComponent가 없는 형태가 됐다.

---

## 5. 카메라 입력 분리 구조 (Kaus 고유 영역) ★

이 문서의 핵심 영역. Lyra가 모든 카메라 입력을 PawnExtension에 모아둔 것을 Kaus는 모드별 컴포넌트로 분리했다.

### 5.1 왜 분리했는가

Lyra의 `ULyraHeroComponent`는 한 클래스 안에서 캐릭터 이동, Look, 어빌리티 입력을 모두 처리한다. 카메라 모드가 한두 종류일 때는 합리적이지만, **모드마다 입력 셋이 완전히 다른 경우** 다음 문제가 생긴다.

- PawnExtension이 점점 비대해진다 (모드 N개의 입력이 모두 들어와야 함).
- 어떤 모드의 입력이 어떤 컨텍스트에서만 유효한지 추적이 어렵다.
- 동일 캐릭터 BP에 모드 일부만 부착하고 싶을 때 코드 수준의 분기가 필요하다.

Kaus는 카메라 모드가 3종(ThirdPerson / ZZZ / Observer)이고, **하나의 플레이어 캐릭터가 ThirdPerson과 ZZZ를 키 하나로 토글**한다. 모드별 입력 셋은 다음처럼 비대칭이다.

| 모드 | 받는 입력 |
|------|-----------|
| ThirdPerson | Look (1종) |
| ZZZ | Move, Zoom, Look, RotateSnap, Reset (5종) |
| Observer | (별도 — ObserverUnitComponent가 직접) |

분리 후 효과:

1. **부착/탈착으로 능력 부여** — 캐릭터 BP에 `UKausZZZCameraInputComponent`를 안 붙이면 ZZZ 모드의 입력 자체가 활성되지 않는다. 코드 변경 없이 BP에서 모드를 빼고 추가할 수 있다.
2. **PawnExtension 슬림화** — `UKausPlayerUnitComponent`는 모드 토글과 캐릭터 이동만 다루고, 모드별 입력은 위임한다.
3. **모드별 InputConfig 분리** — `UKausZZZCameraInputComponent`와 `UKausThirdPersonCameraInputComponent`가 각자 다른 `UKausInputConfig` 자산을 가질 수 있다. ZZZ 전용 InputAction 묶음이 ThirdPerson InputConfig를 오염시키지 않는다.

### 5.2 책임 경계

```
┌─────────────────────────────────────────────────────────────┐
│  Pawn 측 (UKausPlayerUnitComponent 등)                       │
│    - 어떤 모드를 쓸지 결정 (DetermineCameraMode override)    │
│    - 모드 클래스 슬롯 보유 (ThirdPersonCameraModeClass,     │
│      ZZZCameraModeClass)                                    │
│    - 모드 토글 입력 처리 (InputTag.Camera.Switch.TPAndZZZ)  │
│    - 부착된 CameraInputComponent들에 SetupInputBindings 위임│
└──────────────┬──────────────────────────────────────────────┘
               │ FindComponentByClass + SetupInputBindings
               ▼
┌─────────────────────────────────────────────────────────────┐
│  CameraInput 컴포넌트 (UKausZZZCameraInputComponent 등)      │
│    - 자기 모드 전용 InputConfig 보유                         │
│    - InputTag → 핸들러 함수 바인딩                           │
│    - 핸들러는 GetTargetCameraMode<T>() 로 모드 인스턴스 검색 │
│    - 모드의 Add*Input API 한 줄 호출 (얇은 어댑터)           │
└──────────────┬──────────────────────────────────────────────┘
               │ Mode->AddLookInput / AddMoveInput / ...
               ▼
┌─────────────────────────────────────────────────────────────┐
│  Mode 측 (UKausCameraMode_ZZZ 등)                            │
│    - View를 어떻게 계산할지 (UpdateView)                     │
│    - Target 상태 변수에 어떻게 보간할지                      │
│    - Add*Input은 Target 변수만 갱신 (보간은 다음 Tick)       │
└─────────────────────────────────────────────────────────────┘
```

세 영역의 의존 방향은 한 방향이다: Pawn → CameraInput → Mode. 역방향 참조는 없다.

### 5.3 `UKausZZZCameraInputComponent`

**파일**: `KausZZZCameraInputComponent.h/.cpp`
**부모**: `UActorComponent` (Pawn에 한정되지 않음 — `Owner`만 있으면 동작)

#### 주요 변수

| 변수 | 의미 |
|------|------|
| `InputConfig` | `const UKausInputConfig*`. ZZZ 모드 전용 InputTag → InputAction 매핑 |

#### 주요 함수

```cpp
void SetupInputBindings(UKausInputComponent* KausIC)
  // 다섯 개 InputTag를 핸들러에 바인딩:
  //   InputTag.Camera.ZZZ.Move        → Input_MoveXY    (Triggered)
  //   InputTag.Camera.ZZZ.Zoom        → Input_Zoom      (Triggered)
  //   InputTag.Camera.ZZZ.RotateSnap  → Input_RotateSnap(Triggered)
  //   InputTag.Camera.ZZZ.Look        → Input_Look      (Triggered)
  //   InputTag.Camera.ZZZ.Reset       → Input_Reset     (Started)

UKausCameraMode_ZZZ* GetTargetCameraMode() const  [private]
  // CameraComponent->GetCameraModeInstance() 한 줄.
  // 인스턴스가 만들어진 적이 없으면 nullptr.
```

#### 핸들러 패턴 (예: Input_Look)

```cpp
void UKausZZZCameraInputComponent::Input_Look(const FInputActionValue& Value)
{
    FVector2D LookInput = Value.Get();
    if (LookInput.SizeSquared() > 0.0f)
    {
        if (UKausCameraMode_ZZZ* Mode = GetTargetCameraMode())
        {
            Mode->AddLookInput(LookInput);
        }
    }
}
```

모든 핸들러가 이 패턴이다 — 값 추출, null 가드, 모드 API 한 줄 호출. 입력 어댑터로서의 역할만 한다.

#### 주의: 헤더의 미사용 선언

`KausZZZCameraInputComponent.h`에는 `Input_Cinematic`과 `Input_SwitchCamera` 핸들러가 선언되어 있다. `Input_SwitchCamera`는 `.cpp`에 구현이 있지만 `SetupInputBindings`에서 바인딩되지 않으며, 본문 주석이 "이거는 InputComponent의 Controller인 KausPlayerUnitComponent가 담당하자"고 명시한다 — 즉 **PlayerUnit이 직접 `InputTag.Camera.Switch.TPAndZZZ`를 받는다.** `Input_Cinematic`은 미구현 상태다. 정리하거나, 모드별 시네마틱 입력을 도입할 때 활성화하면 된다.

### 5.4 `UKausThirdPersonCameraInputComponent`

**파일**: `KausThirdPersonCameraInputComponent.h/.cpp`
ZZZ 컴포넌트와 동일한 구조의 더 단순한 버전. Look 하나만 바인딩한다.

```cpp
SetupInputBindings:
  InputTag.Camera.ThirdPerson.Look → Input_Look (Triggered)

GetTargetCameraMode → UKausCameraMode_ThirdPerson 인스턴스
Input_Look → Mode->AddLookInput(Value)
```

새 모드를 만들 때 참고할 가장 짧은 템플릿이다.

### 5.5 IMC(InputMappingContext)의 위치

CameraInput 컴포넌트는 IMC를 관리하지 **않는다.** IMC는 **모드 단위로** 보유된다.

```cpp
// UKausCameraMode (베이스)
UPROPERTY(EditDefaultsOnly, Category = "Input")
TObjectPtr CameraMappingContext;

UPROPERTY(EditDefaultsOnly, Category = "Input")
int32 InputMappingPriority = 100;

// OnActivation / OnDeactivation에서 자동 처리:
void UKausCameraMode::OnActivation()
{
    if (CameraMappingContext)
        Subsystem->AddMappingContext(CameraMappingContext, InputMappingPriority);
}
void UKausCameraMode::OnDeactivation()
{
    if (CameraMappingContext)
        Subsystem->RemoveMappingContext(CameraMappingContext);
}
```

이 설계의 의미:

- **모드와 IMC가 한 묶음으로 관리된다** — 모드가 활성될 때 IMC가 자동 추가, 비활성될 때 자동 제거. 별도 코드 없이 모드 전환이 입력 매핑 전환을 끌고 간다.
- **Priority 100은 의도된 값** — `UKausPlayerUnitComponent::InitializePlayerInput`이 `DefaultMappingContext`를 priority 0으로 추가하므로, 모드 IMC는 그 위에 덮어쓰는 위치에 자리잡는다.
- **CameraInputComponent의 InputConfig**는 BindAction에 쓰이는 별개 자산이다. IMC는 "어떤 키가 어떤 InputAction을 트리거하는지", InputConfig는 "어떤 InputAction이 어떤 InputTag와 매칭되는지"를 정의한다.

### 5.6 입력 바인딩의 진입점

전체 입력 바인딩이 일어나는 단일 진입점은 `UKausPlayerUnitComponent::InitializePlayerInput()`이다.

```cpp
void UKausPlayerUnitComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
    // ... LocalPlayer, Subsystem 확보, DefaultMappingContext 추가 ...

    UKausInputComponent* KausIC = Cast(PlayerInputComponent);
    if (KausIC)
    {
        // PlayerUnit 자기 자신의 입력 바인딩
        KausIC->BindAbilityActions(...);
        KausIC->BindNativeAction(InputConfig, InputTag.Camera.Switch.TPAndZZZ, ...);
        KausIC->BindNativeAction(InputConfig, InputTag.Move, ...);
        KausIC->BindNativeAction(InputConfig, InputTag.UI.Interaction.MultipleTarget.Wheel, ...);

        // 카메라 입력 컴포넌트들에 위임
        if (UKausZZZCameraInputComponent* ZZZInputComp =
            GetOwner()->FindComponentByClass())
        {
            ZZZInputComp->SetupInputBindings(KausIC);
        }
        if (UKausThirdPersonCameraInputComponent* TPInputComp =
            GetOwner()->FindComponentByClass())
        {
            TPInputComp->SetupInputBindings(KausIC);
        }
    }
    ReadyToBindInputs();
}
```

**컴포넌트가 부착되어 있지 않으면 그 모드의 입력은 그냥 비활성**된다 — 분기나 컴파일 의존성 없이. 캐릭터 BP에서 컴포넌트만 빼면 ZZZ 모드의 입력이 사라진다(모드 자체는 여전히 푸시 가능하지만, 입력으로는 조작할 수 없다).

---

## 6. Pawn 측 카메라 모드 결정자

"지금 어떤 모드를 푸시해야 하는가"의 책임은 PawnExtension 계층이 진다.

### 6.1 `UKausPawnExtensionComponent` (베이스)

**파일**: `KausPawnExtensionComponent.h/.cpp`
**역할**: 모든 Pawn 측 컴포넌트의 공통 부모. 카메라 모드 결정자의 베이스 로직을 보유.

#### 주요 변수

| 변수 | 카테고리 | 의미 |
|------|----------|------|
| `InputConfig` | Kaus\|Input | 어빌리티 등 native 액션 바인딩에 쓰는 InputConfig |
| `DefaultMappingContext` | Kaus\|Input | 모드와 무관한 기본 IMC (priority 0) |
| `DefaultCameraMode` | Kaus\|Camera | 다른 선택이 없을 때의 fallback 모드 |
| `PersistentCameraMode` | Kaus\|Camera | 스크립트로 지정된 지속 모드 (런타임에 변경) |
| `AbilityCameraMode` (private) | (런타임) | 현재 어빌리티가 강제하는 모드 |
| `AbilityCameraModeOwningSpecHandle` (private) | (런타임) | 그 어빌리티의 spec 핸들 |

#### 주요 함수

```cpp
virtual void InitializePlayerCamera();
  // CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &DetermineCameraMode);
  // Pawn의 PossessedBy 등에서 호출되어야 한다 (관습).

virtual TSubclassOf DetermineCameraMode() const;
  // 베이스 구현:
  //   if (AbilityCameraMode)    return AbilityCameraMode;
  //   if (PersistentCameraMode) return PersistentCameraMode;
  //   return DefaultCameraMode;

SetAbilityCameraMode(NewMode, SpecHandle)
ClearAbilityCameraMode(SpecHandle)
  // 어빌리티 → 카메라 경로. Spec 핸들이 일치할 때만 클리어된다 (다른 어빌리티가 덮어쓴 뒤
  // 첫 어빌리티가 종료 시 잘못 클리어하는 걸 방지).

SetPersistentCameraMode(NewMode)
  // BP에서도 호출 가능. 어빌리티가 끝나도 유지되는 모드.
```

### 6.2 `UKausPlayerUnitComponent` (플레이어 캐릭터용)

**파일**: `KausPlayerUnitComponent.h/.cpp`
**역할**: 플레이어 캐릭터의 입력·카메라·이동 컨트롤러. 베이스의 우선순위 규칙을 무시하고 자체 상태로 모드를 결정한다.

#### 카메라 상태 enum

```cpp
UENUM(BlueprintType)
enum class EKausCameraState : uint8
{
    None,
    ThirdPerson_Mode,
    ZZZ_Mode
};
```

#### 주요 변수

| 변수 | 카테고리 | 의미 |
|------|----------|------|
| `ThirdPersonCameraModeClass` | Kaus\|Camera\|Modes | ThirdPerson 상태일 때 푸시할 모드 클래스 |
| `ZZZCameraModeClass` | Kaus\|Camera\|Modes | ZZZ 상태일 때 푸시할 모드 클래스 |
| `CurrentCameraState` (private) | (런타임) | 현재 상태. 기본값 `ThirdPerson_Mode` |

#### 주요 함수

```cpp
SetCameraState(EKausCameraState NewState)
ToggleCameraState()  // TP ↔ ZZZ 토글
EKausCameraState GetCameraState() const

virtual TSubclassOf DetermineCameraMode() const override
  // switch(CurrentCameraState):
  //   ZZZ_Mode         → ZZZCameraModeClass (있으면)
  //   ThirdPerson_Mode → ThirdPersonCameraModeClass (있으면)
  //   None / default   → nullptr

Input_CameraSwitch_ZZZAndThirdPerson()  // InputTag.Camera.Switch.TPAndZZZ 핸들러 → ToggleCameraState
Input_Move(FInputActionValue)            // InputTag.Move 핸들러. 카메라 Yaw 기준으로 입력 회전
Input_CycleInteraction(FInputActionValue)// 마우스 휠 등으로 인터랙션 타겟 순회
```

**중요**: `DetermineCameraMode` override는 **베이스의 Ability/Persistent 우선순위를 건너뛴다**. 어빌리티가 카메라를 강제로 잡으려면 `UKausPlayerUnitComponent`에서도 `Super::DetermineCameraMode()`를 우선 확인하도록 패치하거나, 어빌리티가 직접 `CameraComponent->PushCameraMode`를 호출해야 한다. 현재 구조는 플레이어 모드 토글이 압도적으로 빈번한 워크플로를 우선시한 트레이드오프다. (코드 노트: §9 참조)

### 6.3 `UKausObserverUnitComponent` (관찰자 폰용)

**파일**: `KausObserverUnitComponent.h/.cpp`
**역할**: `AKausObserverPawn`에 붙는 관찰자 컴포넌트. RTS/오버뷰 시점의 입력 처리 + Observer 카메라 모드에 데이터 공급.

#### 카메라 결정

```cpp
virtual TSubclassOf DetermineCameraMode() const override
{
    if (TSubclassOf ParentCameraMode = Super::DetermineCameraMode())
        return ParentCameraMode;
    return nullptr;  // (현재는 자체 모드 없음. 확장 시 여기로)
}
```

`UKausPlayerUnitComponent`와 달리 **Super 우선** — 어빌리티/Persistent를 따른다. ObserverPawn은 보통 PersistentCameraMode에 `UKausCameraMode_Observer` 파생 클래스가 들어가 있을 것으로 기대된다.

#### 카메라 관련 입력 (간략)

`InputTag.Camera.Move`, `InputTag.Camera.Look.Mouse`, `InputTag.Camera.Snap.Left/Right`, `InputTag.Camera.RangeZoom` 등을 받지만 — `InitializePlayerInput`의 본 바인딩 줄은 대부분 주석 처리되어 있다. 현재 활성된 것은 `InputTag.Orbit.Toggle`과 `InputTag.Mouse.Click` 정도. 즉 Observer 입력 라인은 **공사 중인 영역**이라 변경이 잦을 수 있다.

`UKausObserverUnitComponent`가 `GetCameraRotateAngle()`, `GetCameraRangeZoom()`, `IsCameraSnapDirty()` 등을 노출하므로, `UKausCameraMode_Observer`가 이 컴포넌트를 참조해 자기 카메라 변환에 반영하는 형태로 연결될 가능성이 가장 크다.

### 6.4 `UKausGameplayAbility`의 카메라 제어

**파일**: `AbilitySystem/Abilities/KausGameplayAbility.h/.cpp`
**역할**: 어빌리티가 시전 중에만 특정 카메라를 사용하고 싶을 때의 표준 진입점.

```cpp
void SetCameraMode(TSubclassOf CameraMode);
  // 내부적으로 PawnExtension->SetAbilityCameraMode(CameraMode, GetSpecHandle())

void ClearCameraMode();
  // 어빌리티 종료 시 자동 호출 경로가 있다.
  // PawnExtension->ClearAbilityCameraMode(GetSpecHandle())
```

스킬 시전 / 처형 / 카메라가 바뀌어야 하는 상호작용 등에서 시퀀서와 별개로 카메라만 잠깐 전환하고 싶을 때 사용한다.

---

## 7. 사용 흐름 (레시피)

### 7.1 새 카메라 모드 추가하기

1. **모드 클래스 작성** — `UKausCameraMode` 상속, `UCLASS(Abstract, Blueprintable)`.
   - `UpdateView(DeltaTime)` override: View 채우기
   - 필요시 `OnActivation/OnDeactivation` override (Super 호출 잊지 말 것 — IMC 자동 add/remove를 베이스가 한다)
   - Target/Current 상태 변수 정의 + `AddXxxInput` 류 공개 API 정의
2. **(선택) 모드 전용 IMC 자산 생성** — Content Browser에서 IMC를 만들고 키→InputAction 매핑. 모드 CDO의 `CameraMappingContext`에 할당. `InputMappingPriority`는 보통 100.
3. **CameraInputComponent 생성** — `UActorComponent` 상속, `UKausThirdPersonCameraInputComponent`를 템플릿으로 복제하는 게 가장 빠르다.
   - `SetupInputBindings(KausIC)`에서 InputTag → 핸들러 바인딩
   - 각 핸들러: `GetTargetCameraMode()->AddXxxInput(value)` 한 줄
4. **InputConfig에 InputTag → InputAction 추가** — `UKausInputConfig` 자산에 새 매핑 등록. InputTag는 `KausGameplayTags.cpp`에 `UE_DEFINE_GAMEPLAY_TAG_COMMENT`로 선언.
5. **Pawn BP에 부착**
   - 새 CameraInputComponent 컴포넌트 추가
   - `UKausPlayerUnitComponent`의 모드 슬롯에 새 모드 클래스 지정, 또는 `PersistentCameraMode`에 지정
   - 새 토글 키가 필요하면 `EKausCameraState`에 값 추가 + `DetermineCameraMode` switch 확장 + 토글 InputTag 추가
6. **`UKausPlayerUnitComponent::InitializePlayerInput`에 위임 한 줄 추가**:
   ```cpp
   if (UKausYourCameraInputComponent* InputComp =
       GetOwner()->FindComponentByClass<UKausYourCameraInputComponent>())
   {
       InputComp->SetupInputBindings(KausIC);
   }
   ```

### 7.2 어빌리티 실행 중에만 다른 카메라 쓰기

`UKausGameplayAbility::SetCameraMode(NewMode)` — 시전 시점에 호출. 종료 시 자동으로 `ClearCameraMode` 경로를 탄다.

**단**, 현재 `UKausPlayerUnitComponent::DetermineCameraMode`는 베이스의 Ability 우선순위를 무시하므로, 플레이어 캐릭터에서 어빌리티 카메라가 동작하려면 다음 중 하나가 필요하다.

- `DetermineCameraMode`에 `Super::DetermineCameraMode()` 우선 확인을 넣는 패치
- 어빌리티에서 `CameraComponent->PushCameraMode(NewMode)`를 직접 호출 (델리게이트 우회)
- ObserverPawn 등 베이스 규칙을 따르는 Pawn에서만 사용

### 7.3 카메라 모드 토글 키 추가

- `EKausCameraState`에 값 추가
- `UKausPlayerUnitComponent::DetermineCameraMode`의 switch에 케이스 추가, **각 case 안에 `break;` 또는 `return;`을 명시** (§9 참조)
- `KausGameplayTags`에 새 InputTag 선언
- IMC 매핑 + InputConfig 등록
- `UKausPlayerUnitComponent::InitializePlayerInput`에서 토글 핸들러 바인딩

---

## 8. 디버그

### 8.1 `showdebug Camera`

`AKausPlayerCameraManager::DisplayDebug` → Pawn의 `UKausCameraComponent::DrawDebug` → `CameraModeStack::DrawDebug` → 활성 모드들 각각의 `DrawDebug` 순으로 호출된다. 화면에는 다음이 표시된다.

- 카메라 컴포넌트의 Target Actor / Location / Rotation / FOV
- 스택의 각 모드 이름과 BlendWeight
- ThirdPerson/ZZZ 모드라면 직전 프레임 관통 회피 히트 액터 목록 (`DebugActorsHitDuringCameraPenetration`)

### 8.2 Feeler 시각화

`UKausCameraMode_ThirdPerson::PreventCameraPenetration`과 `UKausCameraMode_ZZZ::PreventCameraPenetration` 내부에 `#if ENABLE_DRAW_DEBUG` 가드가 있다. **`DrawDebug`가 한 번이라도 호출된 직후 1초간** sphere/line이 그려진다 — `LastDrawDebugTime` 기준. 즉 `showdebug Camera`가 켜진 동안만 시각화된다.

### 8.3 `GetBlendInfo`

```cpp
float Weight;
FGameplayTag Tag;
CameraComponent->GetBlendInfo(Weight, Tag);
```

스택 최상단 모드의 `BlendWeight`와 `CameraTypeTag`. UI/게임플레이 코드가 "지금 ZZZ로 완전히 전환됐는가"를 묻기 위해 사용. 모드 전환이 진행 중일 때는 Weight가 1보다 작다.

---

## 9. 확장 시 주의점

**`UKausPlayerUnitComponent::DetermineCameraMode`의 fall-through** — 현재 구현은 `switch` 케이스에 `break`나 `return` 없이 `if`로 분기한 뒤 그 안의 `return`에만 의존한다. `ZZZCameraModeClass`가 nullptr이면 ZZZ 케이스에서 빠져나와 ThirdPerson 케이스로 흘러가고, 그것도 nullptr이면 default까지 도달한다. 의도된 fallback일 수도 있지만 코드만 보면 모호하다. 새 케이스를 추가할 때 **각 케이스 끝에 `break;`를 명시**하거나 `if/else` 체인으로 다시 쓰는 걸 권장.

**베이스의 우선순위 규칙이 PlayerUnit에서는 무력화된다** — `UKausPawnExtensionComponent::DetermineCameraMode`가 보유한 Ability > Persistent > Default 규칙은 `UKausPlayerUnitComponent`가 override해버리면서 사라진다. 플레이어 캐릭터에 어빌리티 카메라를 거는 게 자주 필요해지면 `Super::DetermineCameraMode()`를 우선 확인하는 패치가 들어가야 한다.

**모드 인스턴스의 상태는 모드 전환에도 보존된다** — `UKausCameraModeStack`은 클래스당 인스턴스 하나를 캐시한다(`CameraModeInstances`). ZZZ → ThirdPerson → ZZZ 토글 시 ZZZ의 `TargetYaw`, `CurrentArmLength`, `CurrentPivotOffset`은 이전 값 그대로다. 모드 활성 시 매번 초기화해야 한다면 `OnActivation`에서 명시적으로 리셋(예: `UKausCameraMode_ThirdPerson::OnActivation`이 그렇게 한다).

**CameraInput의 `GetTargetCameraMode()`는 "인스턴스가 만들어진 모드"만 찾는다** — `UKausCameraComponent::GetCameraModeInstance<T>()`는 내부적으로 `ModeStack->FindCameraModeByClass<T>()`를 호출하는데, 이는 `CameraModeInstances` 배열을 검색한다. 모드가 한 번도 푸시되지 않았으면 인스턴스가 없어서 nullptr을 받는다. 즉 **모드가 한 번이라도 활성된 뒤에야 입력이 들어간다**. 처음부터 입력을 받으려면 `DefaultCameraMode` / `PersistentCameraMode`로 미리 지정해 놓는 게 안전.

**IMC priority가 100인 이유** — `UKausPlayerUnitComponent::InitializePlayerInput`에서 `DefaultMappingContext`를 priority 0으로 추가한다. 모드별 IMC가 100이면 같은 InputAction이 양쪽에 있을 때 모드 IMC가 이긴다. 다른 시스템(예: UI)이 IMC를 추가할 때 priority 200 이상이면 카메라 IMC를 덮어쓰므로, 다이얼로그 IMC 같은 건 200~300 범위에 두는 게 안전.

**`UKausCameraComponent::GetCameraView`가 매 프레임 ControlRotation을 PC에 강제 동기화** — 카메라 모드가 만든 `View.ControlRotation`이 매 프레임 `PC->SetControlRotation`을 호출한다. 다른 코드가 ControlRotation을 임의로 바꿔도 다음 프레임에 카메라 값으로 덮어쓰인다. 캐릭터 회전을 카메라 외부에서 제어하려면 `View.ControlRotation`을 만든 모드의 로직 자체를 손봐야 한다.

**ResetInterpolation 플래그** — `UKausCameraMode::bResetInterpolation`은 한 프레임만 살아있는 transient 플래그다. "다음 프레임에 보간 없이 즉시 위치 적용"을 표시하기 위한 신호로 의도된 것 같지만, 현재 베이스 클래스에서는 set/clear/use 코드가 없다. 파생에서 사용할 수 있도록 자리만 잡혀 있는 상태. 도입 시 `UpdateView` 끝에서 false로 클리어하는 패턴을 지킬 것.

**`Input_Cinematic`은 미구현, `Input_SwitchCamera`는 컴포넌트에서 바인딩되지 않음** — `UKausZZZCameraInputComponent.h`에 선언만 있고 `SetupInputBindings`에 빠져있다. 모드 전환은 `UKausPlayerUnitComponent`가 직접 받는 구조라 의도된 것이지만, 헤더에 남은 선언은 정리하거나 향후 시네마틱 입력을 모드 단위로 도입할 때 활성화하면 된다.

**Observer 입력 라인은 작업 중** — `UKausObserverUnitComponent::InitializePlayerInput`의 다수 BindNativeAction이 주석 처리되어 있고, `UKausCameraMode_Observer`도 `Observer` 컴포넌트와의 연결 코드가 헤더의 변수 선언 수준에서 멈춰 있다. Observer 카메라가 실제 동작하려면 이 두 영역의 연결 코드를 마저 작성해야 한다.