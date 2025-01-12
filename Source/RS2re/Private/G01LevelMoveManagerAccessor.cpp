#include "G01LevelMoveManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01LevelMoveManagerAccessor::UG01LevelMoveManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_LEVELSYSTEM;
}

void UG01LevelMoveManagerAccessor::UpdateSaveLevelID(const FLevelTransitionInfoView& InLevelID) {
}

void UG01LevelMoveManagerAccessor::SetIsLoadingSequence(bool InIsLoading) {
}

void UG01LevelMoveManagerAccessor::RequestLevelTransitionFromSaveData() {
}


