#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01AbilityCondition.h"
#include "G01AbilityLearnUnit.generated.h"

class AG01QuestObjectAbility;

UCLASS(Blueprintable)
class RS2RE_API UG01AbilityLearnUnit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01QuestObjectAbility* LearnQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCondition LearnCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LearnProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCondition MasteryCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MasteryProgress;
    
public:
    UG01AbilityLearnUnit();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOpen(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsMastery(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLearn(bool& Out);
    
    UFUNCTION(BlueprintCallable)
    void GetMasteryProgress(FG01AbilityCondition& OutCondition, int32& OutProgress);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnProgress(FG01AbilityCondition& OutCondition, int32& OutProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAbilityId(FName& OutAbilityId);
    
};

