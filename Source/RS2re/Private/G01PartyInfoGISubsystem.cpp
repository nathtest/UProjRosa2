#include "G01PartyInfoGISubsystem.h"

UG01PartyInfoGISubsystem::UG01PartyInfoGISubsystem() {
    this->HelperObject = NULL;
}

UG01PartySubsystemHelper* UG01PartyInfoGISubsystem::GetHelperObject() {
    return NULL;
}

TArray<FG01CharacterID> UG01PartyInfoGISubsystem::GetAllPartyCharaID() {
    return TArray<FG01CharacterID>();
}

TArray<FG01PartyCharaStatus> UG01PartyInfoGISubsystem::GetAllParthCharaInfo() const {
    return TArray<FG01PartyCharaStatus>();
}

void UG01PartyInfoGISubsystem::GetAchievementFormationList(TArray<FG01FormationIDStruct>& OutFormationList) {
}

void UG01PartyInfoGISubsystem::GetAchievementClassList(TArray<FG01CharaClassID>& OutClassList) {
}

void UG01PartyInfoGISubsystem::ClearPartyInfo() {
}


