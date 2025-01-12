#include "SequenceActorControllerBinder.h"
#include "LevelObjectFinderAccessComponent.h"

ASequenceActorControllerBinder::ASequenceActorControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelObjectFinder = CreateDefaultSubobject<ULevelObjectFinderAccessComponent>(TEXT("LevelObjectFinder"));
}


