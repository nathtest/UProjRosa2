#include "SequenceMainBranchController.h"

ASequenceMainBranchController::ASequenceMainBranchController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAllowBranchEvaluate = false;
    this->bIsExecuteBranchEvaluate = false;
}


