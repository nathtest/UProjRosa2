#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EG01BattleCameraPhaseType.h"
#include "G01BattleCameraJudgeBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCameraJudgeBase : public UObject {
    GENERATED_BODY()
public:
    UG01BattleCameraJudgeBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01BattleCameraPhaseType GetPhaseType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOriginActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoJudge(bool& ReCanTransit);
    
};

