#include "PartyMemberManagerBase.h"
#include "EManagerID.h"

APartyMemberManagerBase::APartyMemberManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_PARTY;
}


