#include "GameForceFeedbackManager.h"
#include "EManagerID.h"

AGameForceFeedbackManager::AGameForceFeedbackManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_FORCEFEEDBACK;
    this->bIsEnable = true;
}


