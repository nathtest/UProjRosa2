#include "G01MsgUiControllerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SoundManagerAccessComponent -FallbackName=SoundManagerAccessComponent
#include "G01LipSyncManagerAccessor.h"
#include "G01TextManagerAccessor.h"

AG01MsgUiControllerBase::AG01MsgUiControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TextManagerAccessor = CreateDefaultSubobject<UG01TextManagerAccessor>(TEXT("TextManagerAccessor"));
    this->MSoundManagerAccessor = CreateDefaultSubobject<USoundManagerAccessComponent>(TEXT("SoundManagerAccessor"));
    this->MLipSyncManagerAccessor = CreateDefaultSubobject<UG01LipSyncManagerAccessor>(TEXT("LipSyncManagerAccessor"));
}


