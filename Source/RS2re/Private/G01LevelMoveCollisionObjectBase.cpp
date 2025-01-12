#include "G01LevelMoveCollisionObjectBase.h"
#include "G01StageManagerAccessor.h"

AG01LevelMoveCollisionObjectBase::AG01LevelMoveCollisionObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageManagerAccessor = CreateDefaultSubobject<UG01StageManagerAccessor>(TEXT("StageManagerAccessor"));
    this->MoveType = EAISpeed::AI_SPEED_RUN;
}


