#include "G01FieldNpcAnimInstanceBase.h"

UG01FieldNpcAnimInstanceBase::UG01FieldNpcAnimInstanceBase() {
    this->NpcUniqueAnimStartPosition = 0.00f;
    this->IsEnemy = false;
    this->IsFollowing = false;
    this->OwnerNpc = NULL;
}

void UG01FieldNpcAnimInstanceBase::SetUpAnimationParam(AG01FieldNpcBase* InNpc, float InAnimWalkSpeed, float InAnimRunSpeed) {
}

AActor* UG01FieldNpcAnimInstanceBase::GetVisualActor() {
    return NULL;
}


