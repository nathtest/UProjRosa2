#pragma once
#include "CoreMinimal.h"
#include "GamePlayDataManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GamePlayDataManager -FallbackName=GamePlayDataManager
#include "EG01FriendClass.h"
#include "EG01GameDifficultyType.h"
#include "EG01GamePlayModeType.h"
#include "G01CharacterID.h"
#include "G01EnemyForceLevelTableRow.h"
#include "G01GamePlayDataManagerInf.h"
#include "G01OptionMenuUiControllerObserverInf.h"
#include "G01SaveLoadPlayTimeStruct.h"
#include "G01GamePlayDataManager.generated.h"

class UDataTable;
class UG01GamePlayDataSubsystem;
class UG01PeriodManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GamePlayDataManager : public AGamePlayDataManager, public IG01GamePlayDataManagerInf, public IG01OptionMenuUiControllerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PeriodManagerAccessor* PeriodManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EventPointTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IncomeEventTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IncomeGetConditionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImperialForceLevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImperialForcePointTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyForceLevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxtImperialCrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinImperialLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxImperialLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinEnemyForceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEnemyForceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ShopItemStockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MainMenuTechArtNewList;
    
public:
    AG01GamePlayDataManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool TryUpdateEnemyForcePoint(bool InIsForce);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLastEmperorCharacterIDByClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void SetLastEmperorCharacterID(FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialCrown(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePlayModeType(EG01GamePlayModeType InPlayMode);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePlayDataPlayTime(FG01SaveLoadPlayTimeStruct InPlayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDifficultyType(EG01GameDifficultyType InDifficultyType);
    
    UFUNCTION(BlueprintCallable)
    void SetCrown(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetClearArea(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void ResetBattleCount();
    
    UFUNCTION(BlueprintCallable)
    bool OnUpdateImperialForcePoint();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FG01CharacterID GetLastEmperorCharacterID() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetImperialLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01GamePlayModeType GetGamePlayModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01GamePlayDataSubsystem* GetGamePlayDataSubsystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01GameDifficultyType GetGameDifficultyType() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyForceLevelData(FG01EnemyForceLevelTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyForceLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 FindImperialPointForLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void FindImperialForceLevel(int32 InPoint, bool& OutExist, int32& OutLevel);
    
    UFUNCTION(BlueprintCallable)
    int32 FindEnemyForcePointForLevel(int32 InLevel);
    

    // Fix for true pure virtual functions not being implemented
};

