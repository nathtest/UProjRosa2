#include "G01GimmickLevelMoveBase.h"
#include "G01StageManagerAccessor.h"

AG01GimmickLevelMoveBase::AG01GimmickLevelMoveBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageManagerAccessor = CreateDefaultSubobject<UG01StageManagerAccessor>(TEXT("StageManagerAccessor"));
}

void AG01GimmickLevelMoveBase::StopSoundLevelMoveFinished_Implementation() {
}

void AG01GimmickLevelMoveBase::SetPlayerStartSoftReference(TSoftObjectPtr<APlayerStart> InPlayerStart) {
}

void AG01GimmickLevelMoveBase::SetPlayerStartReference(APlayerStart* InPlayerStart) {
}

void AG01GimmickLevelMoveBase::PlaySoundLevelMoveFinished_Implementation() {
}


