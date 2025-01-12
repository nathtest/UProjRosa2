#include "PartyMemberManagerAccessCompo.h"
#include "EManagerID.h"

UPartyMemberManagerAccessCompo::UPartyMemberManagerAccessCompo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_PARTY;
    this->MPartyMemberManager = NULL;
}

void UPartyMemberManagerAccessCompo::SetPartyMember(EPartyID InMemberID, APawn* InCharacter) {
}

void UPartyMemberManagerAccessCompo::SetPartyLeader(APawn* InPlayer) {
}

APartyMemberManagerBase* UPartyMemberManagerAccessCompo::GetPartyMemberManager() {
    return NULL;
}

APawn* UPartyMemberManagerAccessCompo::GetPartyMemberByID(EPartyID InMemberID) {
    return NULL;
}


