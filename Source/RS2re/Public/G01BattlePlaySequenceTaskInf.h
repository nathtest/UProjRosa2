#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "G01BattlePlaySequenceTaskInf.generated.h"

class AActor;
class ASequenceController;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattlePlaySequenceTaskInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattlePlaySequenceTaskInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePlaySequenceTask_SetSequence(ASequenceController* InSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePlaySequenceTask_SetOriginActorTransform(AActor* InActor, const FTransform& InOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattlePlaySequenceTask_GetActiveCameraActor(AActor*& OutCamera);
    
};

