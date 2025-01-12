#include "EventObjectUnitBase.h"

AEventObjectUnitBase::AEventObjectUnitBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MParentEventFlow = NULL;
    this->MPrevUnitLink = NULL;
    this->MNextUnitLink = NULL;
}

bool AEventObjectUnitBase::Cmd_UA_IsSamePrevUnitLink(TSoftClassPtr<AEventObjectUnitBase> InUnitSoftClass) {
    return false;
}

bool AEventObjectUnitBase::Cmd_UA_IsSameNextUnitLink(TSoftClassPtr<AEventObjectUnitBase> InUnitSoftClass) {
    return false;
}

bool AEventObjectUnitBase::Cmd_UA_HasPrevUnitLink() {
    return false;
}

bool AEventObjectUnitBase::Cmd_UA_HasNextUnitLink() {
    return false;
}

AEventObjectUnitBase* AEventObjectUnitBase::Cmd_UA_GetPrevUnitLink() const {
    return NULL;
}

AEventObjectFlowBase* AEventObjectUnitBase::Cmd_UA_GetParentEventFlow() const {
    return NULL;
}

AEventObjectUnitBase* AEventObjectUnitBase::Cmd_UA_GetNextUnitLink() const {
    return NULL;
}


