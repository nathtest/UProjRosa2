#include "G01FieldFriendNpcGeneratorBase.h"

AG01FieldFriendNpcGeneratorBase::AG01FieldFriendNpcGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MCreateConditions = EG01FriendNpcCreateConditions::JoinParty;
    this->MFriendClass = EG01FriendClass::FRIEND_CLASS_HEAVYINFANTRY;
    this->GenerationNumber = 1;
}


