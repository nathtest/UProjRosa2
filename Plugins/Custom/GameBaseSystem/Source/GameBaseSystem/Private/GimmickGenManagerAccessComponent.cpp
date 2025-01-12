#include "GimmickGenManagerAccessComponent.h"
#include "EManagerID.h"

UGimmickGenManagerAccessComponent::UGimmickGenManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_GIMMICK_GEN;
}

void UGimmickGenManagerAccessComponent::RemoveGimmick(AGimmickObjectGeneratorBase* InCreatedGimmick) {
}

void UGimmickGenManagerAccessComponent::RegistrationGimmick(AGimmickObjectGeneratorBase* InCreatedGimmick) {
}


