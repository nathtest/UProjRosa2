#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleDirectorObserverInf.generated.h"

class AActor;
class ASequenceController;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleDirectorObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleDirectorObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleDirector_OverrideCommandSource(AActor* InSourceActor, AActor* InNewSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleDirector_OnStartedSequence(FName InKey, ASequenceController* InSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleDirector_OnFinishedSequence(FName InKey, ASequenceController* InSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleDirector_OnChangeStatus(UObject* InSenderObject, FName InStatus, FName InTag);
    
};

