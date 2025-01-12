#pragma once
#include "CoreMinimal.h"
#include "EQuestBufferIndex.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EQuestBufferIndex -FallbackName=EQuestBufferIndex
#include "EG01AbilityActivateType.h"
#include "G01AbilityCondition.h"
#include "G01QCondAbilityConditionParams.h"
#include "G01QuestObjectBase.h"
#include "G01QuestObjectAbility.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01QuestObjectAbility : public AG01QuestObjectBase {
    GENERATED_BODY()
public:
    AG01QuestObjectAbility(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetConditionParam_AbilityCondition(EQuestBufferIndex InBufferIndex, bool& OutIsCompleted, FG01QCondAbilityConditionParams& OutCurrent, FG01QCondAbilityConditionParams& OutBase);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_ST_NotifyAbilityActivate(EG01AbilityActivateType InType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_CA_AbilityCondition(EQuestBufferIndex InBufferIndex, FName InAbilityClassTag, const FG01AbilityCondition& InCondition);
    
};

