#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattlePlaySequenceTaskOwnerInf.generated.h"

class ASequenceController;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattlePlaySequenceTaskOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattlePlaySequenceTaskOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePlaySequenceTaskOwner_OnSequenceStarted(ASequenceController* InSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePlaySequenceTaskOwner_OnSequenceFinished(ASequenceController* InSequence);
    
};

