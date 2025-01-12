#pragma once
#include "CoreMinimal.h"
#include "G01BattleCommandTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattleCommandTaskBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCommandTaskBase : public UG01BattleTask, public IG01BattleCommandTaskInf {
    GENERATED_BODY()
public:
    UG01BattleCommandTaskBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAcceptConfuse();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUniqueID(int32& OutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActionCountNum(int32& OutNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActionCountId(int32& OutId);
    

    // Fix for true pure virtual functions not being implemented
};

