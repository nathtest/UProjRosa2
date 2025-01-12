#include "G01QuestCoreData.h"

UG01QuestCoreData::UG01QuestCoreData() {
    this->bIsDestinationPrecedenced = false;
}

bool UG01QuestCoreData::IsDestinationPrecedenced() const {
    return false;
}

int32 UG01QuestCoreData::GetNumChronicleData() const {
    return 0;
}

FG01DestinationInfo UG01QuestCoreData::GetDestinationInfo() const {
    return FG01DestinationInfo{};
}

TArray<FText> UG01QuestCoreData::GenerateSynopsisChronicleTexts() const {
    return TArray<FText>();
}

TArray<FG01QuestChronicleParam> UG01QuestCoreData::GenerateChronicleList() const {
    return TArray<FG01QuestChronicleParam>();
}

void UG01QuestCoreData::FindChronicleData(int32 InChronicleIndex, bool& OutIsValid, FG01QuestChronicleTableRow& OutData) const {
}


