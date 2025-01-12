#include "G01EventUnitTalkBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectFinderAccessComponent -FallbackName=LevelObjectFinderAccessComponent

AG01EventUnitTalkBase::AG01EventUnitTalkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MLevelObjectFinderAccessor = CreateDefaultSubobject<ULevelObjectFinderAccessComponent>(TEXT("LevelObjectFinderAccessor"));
}


