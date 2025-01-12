#include "CameraManagerAccessor.h"
#include "EManagerID.h"

UCameraManagerAccessor::UCameraManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_CAMERA;
}

void UCameraManagerAccessor::FindCameraShakeParam(bool& OutIsFound, FCameraShakeParamTableRow& OutParam, FCameraShakeID InID) {
}


