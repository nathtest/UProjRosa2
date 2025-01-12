#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "EG01MapAspectType.h"
#include "G01BattleSystemController.h"
#include "G01MapAspectAction.h"
#include "G01MapAspectFlowKeyStruct.h"
#include "G01MapAspectFlowTableRow.h"
#include "G01MapAspectOverride.h"
#include "G01MapAspectResult.h"
#include "G01BattleMapAspectController.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleMapAspectController : public AG01BattleSystemController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MapAspectFlowKeyStruct DefaultFlowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FlowTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MProbabilityBonusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MAttackBonusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MRecoverRateTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MTestModeEnabled;
    
public:
    AG01BattleMapAspectController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDamageBonus();
    
    UFUNCTION(BlueprintCallable)
    void SetInitialMapAspectFlow(FG01MapAspectFlowKeyStruct InMapAspectFlow);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialMapAspect(EG01MapAspectType InMapAspect);
    
    UFUNCTION(BlueprintCallable)
    void OnTurnElapsed(int32 InTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTypeUseCount(EG01MapAspectType InType, int32& OutCount);
    
    UFUNCTION(BlueprintCallable)
    FG01MapAspectResult GetResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRemainTurnToRevert(int32& OutTurn);
    
    UFUNCTION(BlueprintCallable)
    float GetRecoverRate(bool InIsPlayer, TArray<EG01MapAspectType> InPlayerMapAspectRecoverType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentMapAspectFlow(FG01MapAspectFlowTableRow& OutFlow);
    
    UFUNCTION(BlueprintCallable)
    EG01MapAspectType GetCurrentMapAspect();
    
private:
    UFUNCTION(BlueprintCallable)
    bool GetAttackBonus(const FG01MapAspectAction& InAction, float& OutAttackBonus);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteOverride(const FG01MapAspectOverride& InOverride);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteArts(bool InIsPlayer, EG01BattleArtsType InSourceArtsType);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAction(const FG01MapAspectAction& InAction);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogLottery(int32 InPercent, int32 InLottery, bool InIsChanged);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable)
    void DBG_LogEnd();
    
    UFUNCTION(BlueprintCallable)
    void DBG_LogBegin();
    
};

