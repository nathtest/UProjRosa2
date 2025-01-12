#include "G01GimmickSpotBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01GimmickSpotBase::AG01GimmickSpotBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    this->MScopeType = EG01SpotScopeType::Always;
}

void AG01GimmickSpotBase::SpotFinish_Implementation() {
}

void AG01GimmickSpotBase::SpotAction_Implementation() {
}

void AG01GimmickSpotBase::SetSpotEffect(UObject* InSpotEffect) {
}

void AG01GimmickSpotBase::GetTouchSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

UObject* AG01GimmickSpotBase::GetSpotEffect() {
    return NULL;
}

bool AG01GimmickSpotBase::GetFlag() {
    return false;
}

void AG01GimmickSpotBase::GetActionSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}


