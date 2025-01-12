#include "G01QuestObjectAbility.h"

AG01QuestObjectAbility::AG01QuestObjectAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01QuestObjectAbility::GetConditionParam_AbilityCondition(EQuestBufferIndex InBufferIndex, bool& OutIsCompleted, FG01QCondAbilityConditionParams& OutCurrent, FG01QCondAbilityConditionParams& OutBase) {
}

void AG01QuestObjectAbility::Cmd_ST_NotifyAbilityActivate(EG01AbilityActivateType InType) {
}

void AG01QuestObjectAbility::Cmd_CA_AbilityCondition(EQuestBufferIndex InBufferIndex, FName InAbilityClassTag, const FG01AbilityCondition& InCondition) {
}


