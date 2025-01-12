#include "QuestDebugCollisionObjectBase.h"

AQuestDebugCollisionObjectBase::AQuestDebugCollisionObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FName AQuestDebugCollisionObjectBase::GetEventArg_TargetSection() {
    return NAME_None;
}

FName AQuestDebugCollisionObjectBase::GetEventArg_TargetQuestClass() {
    return NAME_None;
}

void AQuestDebugCollisionObjectBase::GetEventArg_QuestDestSectionInfo(const FEventArguments& InEventArgs, bool& OutIsValid, TSoftClassPtr<AQuestObjectBase>& OutTargetQuestClass, FQuestSectionNameView& OutTargetSection, bool& OutIsLevelTransition) {
}

FName AQuestDebugCollisionObjectBase::GetEventArg_IsLevelTransition() {
    return NAME_None;
}


