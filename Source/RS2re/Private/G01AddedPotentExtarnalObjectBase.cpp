#include "G01AddedPotentExtarnalObjectBase.h"

AG01AddedPotentExtarnalObjectBase::AG01AddedPotentExtarnalObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SourceObject = NULL;
    this->TargetObject = NULL;
}

void AG01AddedPotentExtarnalObjectBase::RemoveSelf() {
}


bool AG01AddedPotentExtarnalObjectBase::OnInitialize_Implementation() {
    return false;
}

bool AG01AddedPotentExtarnalObjectBase::OnFinalize_Implementation() {
    return false;
}





bool AG01AddedPotentExtarnalObjectBase::IsDiscard() {
    return false;
}

void AG01AddedPotentExtarnalObjectBase::GetTargetObject(UObject*& OutObject) {
}

void AG01AddedPotentExtarnalObjectBase::GetSourceObject(UObject*& OutObject) {
}

void AG01AddedPotentExtarnalObjectBase::GetParameter(FName& OutParameter) {
}

void AG01AddedPotentExtarnalObjectBase::GetKey(FG01AddedPotentBaseKeyStruct& OutKey) {
}

void AG01AddedPotentExtarnalObjectBase::DiscardSelf() {
}


