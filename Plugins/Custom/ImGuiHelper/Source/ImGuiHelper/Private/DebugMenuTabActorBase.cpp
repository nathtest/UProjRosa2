#include "DebugMenuTabActorBase.h"

ADebugMenuTabActorBase::ADebugMenuTabActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoUnregistTab = true;
    this->TabPage = NULL;
}




