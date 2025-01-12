#include "QuestDataAsset.h"

UQuestDataAsset::UQuestDataAsset() {
    this->SectionTable = NULL;
    this->FlagTable = NULL;
}

void UQuestDataAsset::GetValidSectionParam(int32 InSectionIndex, bool& OutIsValid, FQuestSectionParam& OutParam) const {
}

UDataTable* UQuestDataAsset::GetSectionTable() const {
    return NULL;
}

FQuestSectionParam UQuestDataAsset::GetSectionParam(int32 InSectionIndex) const {
    return FQuestSectionParam{};
}

FName UQuestDataAsset::GetSectionName(int32 InSectionIndex) const {
    return NAME_None;
}

TSoftClassPtr<AQuestObjectBase> UQuestDataAsset::GetQuestClass() const {
    return NULL;
}

FQuestSectionParam UQuestDataAsset::GetPostSectionParam() const {
    return FQuestSectionParam{};
}

FQuestSectionParam UQuestDataAsset::GetLastSectionParam() const {
    return FQuestSectionParam{};
}

UDataTable* UQuestDataAsset::GetFlagTable() const {
    return NULL;
}

FQuestSectionParam UQuestDataAsset::GetFirstSectionParam() const {
    return FQuestSectionParam{};
}

int32 UQuestDataAsset::ConvertSectionNameToSectionIndex(const FQuestSectionNameView& InSectionName) const {
    return 0;
}

bool UQuestDataAsset::CheckSectionNameExist(const FName& InSectionName) const {
    return false;
}


