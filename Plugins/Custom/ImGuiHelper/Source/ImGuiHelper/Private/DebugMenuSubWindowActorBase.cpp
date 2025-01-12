#include "DebugMenuSubWindowActorBase.h"

ADebugMenuSubWindowActorBase::ADebugMenuSubWindowActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoUnregistSubWindow = true;
    this->SubWindow = NULL;
}




