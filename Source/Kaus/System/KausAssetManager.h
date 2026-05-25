
#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "KausAssetManager.generated.h"

class UKausGameData;

/**
 *
 */
/**
 * UKausAssetManager
 *
 * 프로젝트의 AssetManager. Lyra 패턴을 차용해 다음 세 가지 책임을 진다.
 *
 *  1) 간접 참조(Soft Reference) 로딩
 *     TSoftObjectPtr / TSoftClassPtr 를 동기 로드해 반환한다.
 *     헤더에 강참조를 두지 않아도 되므로 컴파일 의존성과 패키지 크기를 줄이고,
 *     "지금 이 자산이 필요하다" 시점에만 비용을 지불하는 구조가 된다.
 *
 *  2) GC 방지 영구 상주
 *     bKeepInMemory=true 로 로드된 자산은 LoadedAssets 에 등록되어
 *     게임 종료 시까지 GC 수집 대상에서 제외된다.
 *     "한 번 로드되면 살아 있어야 하는" 글로벌 데이터 자산용.
 *
 *  3) 선행 적재(Initial Loading)
 *     StartInitialLoading 에서 GetGameData() 를 호출해 게임 진입 직후
 *     KausGameData 가 이미 로드된 상태가 되도록 한다.
 *
 * 클래스 오버라이드는 Config/DefaultEngine.ini 의 AssetManagerClassName 으로 지정된다.
 */
UCLASS(Config = Game)
class KAUS_API UKausAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	UKausAssetManager();

	/** GEngine->AssetManager 를 KausAssetManager 로 캐스팅해 반환하는 싱글톤 접근자. ini 설정이 잘못되어 캐스팅 실패 시 Fatal 로그. */
	static UKausAssetManager& Get();

	/**
	 * Soft 참조로 보관된 자산을 동기 로드해 반환한다.
	 *
	 * TSoftObjectPtr 를 받는 이유는, 호출 측이 자산에 대한 강참조를 헤더 단계에서 끌고
	 * 다닐 필요가 없도록 하기 위함이다(컴파일 의존성·패키지 의존성 감소).
	 *
	 * @param AssetPointer    로드할 자산의 Soft 경로.
	 * @param bKeepInMemory   true 면 LoadedAssets 에 등록되어 GC 대상에서 제외된다.
	 *                        한 번만 쓰고 버릴 자산이면 false 권장.
	 */
	template<typename AssetType>
	static AssetType* GetAsset(const TSoftObjectPtr<AssetType>& AssetPointer, bool bKeepInMemory = true);

	/**
	 * Soft 클래스 참조를 로드해 TSubclassOf 로 반환한다. 동작은 GetAsset 과 동일하되
	 * 자산 인스턴스가 아닌 UClass 를 로드한다는 점이 다르다.
	 */
	template<typename AssetType>
	static TSubclassOf<AssetType> GetSubclass(const TSoftClassPtr<AssetType>& AssetPointer, bool bKeepInMemory = true);

	/**
	 * 전역 KausGameData 를 지연 로드 후 반환한다.
	 * 캐시된 인스턴스가 있으면 즉시 반환, 없으면 KausGameDataPath 를 동기 로드한다.
	 * StartInitialLoading 에서 1회 호출되어 게임 시작 시 항상 유효한 인스턴스를 보장.
	 */
	const UKausGameData& GetGameData();

protected:
	//~UAssetManager interface
	/**
	 * AssetManager 부팅 훅. 엔진이 모듈 초기화 시점에 호출한다.
	 * 여기서 GetGameData() 를 부르는 이유: 게임 진입 전(첫 화면이 뜨기 전)에
	 * 핵심 글로벌 데이터가 이미 메모리에 적재돼 있어야 한다는 계약을 보장하기 위함.
	 */
	virtual void StartInitialLoading() override;
	//~End of UAssetManager interface

private:
	/**
	 * GC 방지용 영구 상주 풀.
	 *
	 * UPROPERTY 강참조이므로 set 에 든 UObject 는 GC 수집되지 않는다.
	 * GetAsset/GetSubclass 가 bKeepInMemory=true 로 로드한 자산이 이 곳에 등록되어
	 * AssetManager 수명(=게임 수명) 동안 살아 있는다.
	 */
	UPROPERTY()
	TSet<TObjectPtr<const UObject>> LoadedAssets;

	/** DefaultGame.ini 등에서 지정되는 KausGameData 자산 경로. Soft 참조로 보관해 부팅 단계까지 강참조를 만들지 않는다. */
	UPROPERTY(Config)
	TSoftObjectPtr<UKausGameData> KausGameDataPath;

	/** GetGameData() 의 캐시. 최초 로드 후 게임 종료까지 동일 인스턴스를 반환한다. */
	UPROPERTY(Transient)
	TObjectPtr<UKausGameData> CachedGameData;
};

template<typename AssetType>
AssetType* UKausAssetManager::GetAsset(const TSoftObjectPtr<AssetType>& AssetPointer, bool bKeepInMemory)
{
	AssetType* LoadedAsset = nullptr;

	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();

	if (AssetPath.IsValid())
	{
		// 이미 메모리에 있으면 동기 로드 비용을 피한다.
		LoadedAsset = AssetPointer.Get();
		if (!LoadedAsset)
		{
			// 강제 동기 로드 — 첫 접근 시점에만 발생.
			LoadedAsset = Cast<AssetType>(AssetPath.TryLoad());
			ensureAlwaysMsgf(LoadedAsset, TEXT("Failed to load asset [%s]"), *AssetPointer.ToString());
		}

		if (LoadedAsset && bKeepInMemory)
		{
			// LoadedAssets 에 등록 → GC 방지. 게임 종료 시까지 살아 있는다.
			Get().AddLoadedAsset(Cast<UObject>(LoadedAsset));
		}
	}

	return LoadedAsset;
}

template<typename AssetType>
TSubclassOf<AssetType> UKausAssetManager::GetSubclass(const TSoftClassPtr<AssetType>& AssetPointer, bool bKeepInMemory)
{
	TSubclassOf<AssetType> LoadedSubclass;

	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();

	if (AssetPath.IsValid())
	{
		// 이미 로드된 클래스면 즉시 반환.
		LoadedSubclass = AssetPointer.Get();
		if (!LoadedSubclass)
		{
			// 첫 접근 시점에만 동기 로드.
			LoadedSubclass = Cast<UClass>(AssetPath.TryLoad());
			ensureAlwaysMsgf(LoadedSubclass, TEXT("Failed to load asset class [%s]"), *AssetPointer.ToString());
		}

		if (LoadedSubclass && bKeepInMemory)
		{
			// UClass 도 UObject — GC 방지를 위해 LoadedAssets 에 등록.
			Get().AddLoadedAsset(Cast<UObject>(LoadedSubclass));
		}
	}

	return LoadedSubclass;
}