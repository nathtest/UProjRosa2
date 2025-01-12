#include "GraphicsSettingManagerBase.h"
#include "EManagerID.h"

AGraphicsSettingManagerBase::AGraphicsSettingManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_GRAPHICSSETTING;
}


