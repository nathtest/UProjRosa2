#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "EG01GameDifficultyType.h"
#include "G01BattleData.h"
#include "G01BattleEnemyAppearMaster.h"
#include "G01BattleEnemyCommandChangeTableRow.h"
#include "G01BattleEnemyCommandRoutineTableRow.h"
#include "G01BattleEnemyCommandTargetTableRow.h"
#include "G01BattleEnemyDropInfo.h"
#include "G01BattleEnemyEnhanceFindKey.h"
#include "G01BattleEnemyEnhanceMaster.h"
#include "G01BattleEnemyEnhanceTableRow.h"
#include "G01BattleEnemyFormationMaster.h"
#include "G01BattleEnemyFormationTableRow.h"
#include "G01BattleEnemyManagerInf.h"
#include "G01BattleEnemyTableRow.h"
#include "G01BattleManagerObserverInf.h"
#include "G01GamePlayDataManagerObserverInf.h"
#include "G01BattleEnemyManager.generated.h"

class AActor;
class AAppActor;
class UG01BattleEnemyDataAsset;
class UG01BattleEnemyThinkTargetSelect;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleEnemyManager : public AManagerBase, public IG01BattleEnemyManagerInf, public IG01BattleManagerObserverInf, public IG01GamePlayDataManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleEnemyDataAsset* BattleEnemyDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01GameDifficultyType CurrentDifficultyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleEnemyEnhanceMaster EnhanceMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleEnemyFormationMaster FormationMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleEnemyFormationMaster RandomFormationMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleEnemyAppearMaster AppearMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemDropRemainCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DefeatedEnemyIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DefeatedMainEnemyIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DefeatedSubEnemyIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleEnemyDropInfo> DefeatedMainEnemyDropInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleEnemyDropInfo> DefeatedSubEnemyDropInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OriginalIdList;
    
public:
    AG01BattleEnemyManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void LotteryByWeight(const TArray<int32>& InWeightList, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    void FindCommandTarget(FName InRowName, bool& OutFound, FG01BattleEnemyCommandTargetTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindCommandRoutine(FName InRowName, bool& OutFound, FG01BattleEnemyCommandRoutineTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindCommandChange(FName InRowName, bool& OutFound, FG01BattleEnemyCommandChangeTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleEnemyFormation(FName InRowName, bool& OutFound, FG01BattleEnemyFormationTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleEnemyEnhance(const FG01BattleEnemyEnhanceFindKey& InFindKey, bool& OutFound, FName& OutRowName, FG01BattleEnemyEnhanceTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleEnemy(FName InRowName, bool& OutFound, FG01BattleEnemyTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void DecideEnemyTeam(UPARAM(Ref) FG01BattleData& InBattleData, bool& OutLotFormation, bool& OutLotSubEnemy);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendCommandLogLotteryTargetPriority(FName InPriorityId, UG01BattleEnemyThinkTargetSelect* InTargetSelect, const TArray<AAppActor*>& InTargetList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendCommandLogLotteryTargetDefault(const TArray<AAppActor*>& InTargetList, const TArray<int32>& InWeightList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendCommandLogLotteryTargetAlly(const TArray<AAppActor*>& InTargetList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendCommandLogLotteryArts(FName InPatternId, int32 InTableIndex, const TArray<FName>& InArtsIdList, const TArray<int32>& InWeightList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable)
    void DBG_CommandLogEnd();
    
    UFUNCTION(BlueprintCallable)
    void DBG_CommandLogBegin(AActor* InCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

