#include "G01PartyCharacterBase.h"

AG01PartyCharacterBase::AG01PartyCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FName AG01PartyCharacterBase::GetSpeciesID() const {
    return NAME_None;
}

int32 AG01PartyCharacterBase::GetInspirationID() const {
    return 0;
}

FG01CharaClassID AG01PartyCharacterBase::GetClassID() const {
    return FG01CharaClassID{};
}

TArray<EG01PartyCharacteristic> AG01PartyCharacterBase::GetCharacteristic() const {
    return TArray<EG01PartyCharacteristic>();
}


