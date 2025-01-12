#include "G01ExpGrowthComponent.h"

UG01ExpGrowthComponent::UG01ExpGrowthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMasterLevel = 0;
    this->IsThrowHpExpByGrowthOnce = false;
    this->IsThrowBpExpByGrowthOnce = false;
    this->IsThrowArtsExpByGrowthOnce = false;
    this->IsThrowMlExpByGrowthOnce = false;
    this->MaxTotalExp = 99999999;
}




