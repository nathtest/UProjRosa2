#include "G01BattleBossRecordManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BattleBossRecordManagerAccessor::UG01BattleBossRecordManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BATTLEBOSSRECORD;
}


