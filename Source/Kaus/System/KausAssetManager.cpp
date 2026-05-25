#include "KausAssetManager.h"
#include "KausGameData.h"
#include "Logs/KausLogChannels.h"

UKausAssetManager::UKausAssetManager()
{
}

/**
 * 싱글톤 접근자. GEngine 의 AssetManager 슬롯이 KausAssetManager 가 아니면 ini 설정 오류이며,
 * 이 경우 Fatal 로그로 즉시 알리고 임시 인스턴스를 반환한다(이후 호출은 사실상 의미 없음).
 */
UKausAssetManager& UKausAssetManager::Get()
{
	check(GEngine);

	if (UKausAssetManager* Singleton = Cast<UKausAssetManager>(GEngine->AssetManager))
	{
		return *Singleton;
	}

	// 여기 도달 = DefaultEngine.ini 의 AssetManagerClassName 설정 누락/오타.
	UE_LOG(LogKaus, Fatal, TEXT("Invalid AssetManagerClassName in DefaultEngine.ini.  It must be set to KausAssetManager!"));

	return *NewObject<UKausAssetManager>();
}

/**
 * AssetManager 부팅 훅. 게임 진입 직전에 호출된다.
 *
 * GetGameData() 를 여기서 호출하는 이유:
 *   "게임 첫 화면이 뜨기 전에 핵심 글로벌 데이터(KausGameData) 가 이미
 *    로드된 상태여야 한다"는 계약의 시작점이 이 메서드다.
 *   초기 적재가 끝나면 이후 어디서든 GetGameData() 호출은 캐시 히트로 처리된다.
 */
void UKausAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	// 글로벌 데이터 자산을 미리 로드해 두어 진입 후 첫 접근에서 멈춤이 없게 한다.
	GetGameData();
}

/**
 * KausGameData 의 지연 로드 + 캐시.
 *
 * 첫 호출 시 KausGameDataPath(Config 지정 Soft 참조)를 동기 로드해
 * CachedGameData 에 보관하고 LoadedAssets 에 등록(=GC 방지) 한다.
 * 이후 호출은 캐시를 그대로 반환.
 *
 * 로드 실패는 ini 경로 오류일 가능성이 높으나, 빈 GameData 라도 항상 유효한 참조를
 * 반환해 호출 측이 null 체크를 강제당하지 않도록 한다.
 */
const UKausGameData& UKausAssetManager::GetGameData()
{
	if (CachedGameData)
	{
		// 이미 로드된 경우 — 진입 후 정상 경로.
		return *CachedGameData;
	}

	UKausGameData* LoadedData = nullptr;
	if (!KausGameDataPath.IsNull())
	{
		// 부팅 시점이라 동기 로드가 허용된다. 한 번만 발생.
		LoadedData = KausGameDataPath.LoadSynchronous();
	}

	if (LoadedData)
	{
		CachedGameData = LoadedData;
		// LoadedAssets 에 강참조로 등록 → 게임 종료 시까지 GC 안전.
		LoadedAssets.Add(CachedGameData);
	}
	else
	{
		// 경로 오설정/누락 등으로 로드 실패 — 호출자에게 nullptr 을 강제하지 않도록 빈 인스턴스 fallback.
		UE_LOG(LogKaus, Error, TEXT("Failed to load KausGameData! Check DefaultEngine.ini"));
		CachedGameData = NewObject<UKausGameData>();
	}

	return *CachedGameData;
}