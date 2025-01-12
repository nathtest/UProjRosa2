#include "LevelObjectFinderAccessComponent.h"
#include "EManagerID.h"

ULevelObjectFinderAccessComponent::ULevelObjectFinderAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_LVOBJFINDER;
}

bool ULevelObjectFinderAccessComponent::FindLevelObjects(const FLevelObjectID& InLevelObjectID, TArray<FLevelObjectFindResult>& OutFindResult) const {
    return false;
}

void ULevelObjectFinderAccessComponent::FindLevelObject(FEditableLevelObjectID InLevelObjectID, bool& IsFound, FLevelObjectFindResult& OutFindResult, bool InIsErrorCheck) const {
}


