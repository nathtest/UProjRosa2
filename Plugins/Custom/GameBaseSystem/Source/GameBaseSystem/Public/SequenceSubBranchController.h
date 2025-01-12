#pragma once
#include "CoreMinimal.h"
#include "SequenceBranchController.h"
#include "SequenceSubBranchController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceSubBranchController : public ASequenceBranchController {
    GENERATED_BODY()
public:
    ASequenceSubBranchController(const FObjectInitializer& ObjectInitializer);

};

