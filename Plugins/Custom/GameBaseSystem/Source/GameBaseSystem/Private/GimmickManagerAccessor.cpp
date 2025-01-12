#include "GimmickManagerAccessor.h"
#include "EManagerID.h"

UGimmickManagerAccessor::UGimmickManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_GIMMICK;
}

void UGimmickManagerAccessor::UnregisterGimmick(AGimmickObjectBase* InGimmickObject) {
}

void UGimmickManagerAccessor::SetGlobalInteractEnabled(bool InEnabled) {
}

void UGimmickManagerAccessor::SetDebugVisible(bool InDebugVisible) {
}

void UGimmickManagerAccessor::RegisterGimmick(AGimmickObjectBase* InGimmickObject) {
}


