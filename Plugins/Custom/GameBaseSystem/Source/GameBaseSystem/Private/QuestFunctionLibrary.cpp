#include "QuestFunctionLibrary.h"

UQuestFunctionLibrary::UQuestFunctionLibrary() {
}

bool UQuestFunctionLibrary::QuestOrderStateAND(TEnumAsByte<EQuestOrderState::Type> InLhs, int32 InRhs) {
    return false;
}

FName UQuestFunctionLibrary::GetPreSectionName() {
    return NAME_None;
}

int32 UQuestFunctionLibrary::GetPreSectionIndex() {
    return 0;
}

FString UQuestFunctionLibrary::GetPreSectionDescription() {
    return TEXT("");
}

FName UQuestFunctionLibrary::GetPostSectionName() {
    return NAME_None;
}

FString UQuestFunctionLibrary::GetPostSectionDescription() {
    return TEXT("");
}

int32 UQuestFunctionLibrary::GetErrorSectionIndex() {
    return 0;
}

void UQuestFunctionLibrary::Func_QuestIDtoQuestFullID(FName InOriginalID, FName InCustomID, FName& OutFullID) {
}

bool UQuestFunctionLibrary::Func_QuestFullIDtoQuestID(FName InQuestID, FName& OutOriginalID, FName& OutCustomID) {
    return false;
}

FName UQuestFunctionLibrary::ConvertQuestClassToQuestID(const UObject* InWorldContextObjectconst, const TSoftClassPtr<AQuestObjectCore>& InQuestClass) {
    return NAME_None;
}


