#include "SequenceBranchController.h"
#include "FlagSystemManagerAccessCompo.h"
#include "QuestManagerAccessComponent.h"

ASequenceBranchController::ASequenceBranchController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagSystemManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagSystemManagerAccessor"));
    this->MQuestManagerAccessor = CreateDefaultSubobject<UQuestManagerAccessComponent>(TEXT("QuestManagerAccessor"));
}


