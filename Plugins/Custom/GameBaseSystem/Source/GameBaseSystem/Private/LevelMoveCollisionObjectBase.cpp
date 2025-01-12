#include "LevelMoveCollisionObjectBase.h"

ALevelMoveCollisionObjectBase::ALevelMoveCollisionObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ALevelMoveCollisionObjectBase::SetPlayerStartSoftReference(TSoftObjectPtr<APlayerStart> InPlayerStart) {
}

void ALevelMoveCollisionObjectBase::SetPlayerStartReference(APlayerStart* InPlayerStart) {
}

FName ALevelMoveCollisionObjectBase::GetEventArg_PlayerStart() {
    return NAME_None;
}

FName ALevelMoveCollisionObjectBase::GetEventArg_DestLevelID() {
    return NAME_None;
}


