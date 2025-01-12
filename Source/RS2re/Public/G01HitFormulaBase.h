#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleArtsTableRow.h"
#include "G01HitFormulaBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API UG01HitFormulaBase : public UObject {
    GENERATED_BODY()
public:
    UG01HitFormulaBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LotteryHit(AActor* InSource, AActor* InTarget, const FG01BattleArtsTableRow& InArts, bool& ReIsMiss, int32& ReHitCount);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogLottery(int32 InPercent, int32 InLottery, bool InIsHit);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void DBG_SendLogFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable)
    void DBG_LogEnd();
    
    UFUNCTION(BlueprintCallable)
    void DBG_LogBegin();
    
};

