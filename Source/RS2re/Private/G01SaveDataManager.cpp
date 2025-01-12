#include "G01SaveDataManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ScreenTransitionManagerAccessor -FallbackName=ScreenTransitionManagerAccessor
#include "G01FieldPlayerManagerAccessor.h"
#include "G01LevelMoveManagerAccessor.h"
#include "G01SequenceManagerAccessor.h"

AG01SaveDataManager::AG01SaveDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceManagerAccessor = CreateDefaultSubobject<UG01SequenceManagerAccessor>(TEXT("SequenceManagerAccessor"));
    this->ScreenTransitionManagerAccessor = CreateDefaultSubobject<UScreenTransitionManagerAccessor>(TEXT("ScreenTransitionManagerAccessor"));
    this->PlayerManagerAccessor = CreateDefaultSubobject<UG01FieldPlayerManagerAccessor>(TEXT("PlayerManagerAccessor"));
    this->LevelMoveManagerAccessor = CreateDefaultSubobject<UG01LevelMoveManagerAccessor>(TEXT("LevelMoveManagerAccessor"));
    this->bIsRequestRestoreLevelTransition = false;
    this->AutoSaveDelayTime = 0.00f;
}


