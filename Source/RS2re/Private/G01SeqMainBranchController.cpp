#include "G01SeqMainBranchController.h"
#include "G01HudManagerAccessor.h"

AG01SeqMainBranchController::AG01SeqMainBranchController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HudManagerAccessor = CreateDefaultSubobject<UG01HudManagerAccessor>(TEXT("HudManagerAccessor"));
}


