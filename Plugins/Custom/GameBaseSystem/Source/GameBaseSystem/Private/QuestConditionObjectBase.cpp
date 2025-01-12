#include "QuestConditionObjectBase.h"

UQuestConditionObjectBase::UQuestConditionObjectBase() {
    this->CoreData = NULL;
    this->ParamIndex = EQuestBufferIndex::Invalid;
}

void UQuestConditionObjectBase::SetCompleted(bool InIsCompleted) {
}

bool UQuestConditionObjectBase::IsCompleted() {
    return false;
}

UScriptStruct* UQuestConditionObjectBase::GetParamStruct() const {
    return NULL;
}

FString UQuestConditionObjectBase::GetConditionDescription() const {
    return TEXT("");
}


