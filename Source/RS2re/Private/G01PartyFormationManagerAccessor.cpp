#include "G01PartyFormationManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01PartyFormationManagerAccessor::UG01PartyFormationManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_PARTYFORMATION;
}

void UG01PartyFormationManagerAccessor::RequestPartyFormation(AActor* Actor, FG01PartyFormationReactionTypeIDStruct ReactionID) {
}

void UG01PartyFormationManagerAccessor::RequestFriendPartyFormationFromBlackSmith(AActor* Actor, FG01CharacterID CharacterID) {
}

void UG01PartyFormationManagerAccessor::RequestFriendPartyFormation(AActor* Actor, FG01CharacterID CharacterID) {
}

void UG01PartyFormationManagerAccessor::Close() {
}


