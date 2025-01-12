#pragma once
#include "CoreMinimal.h"
#include "SequenceSubBranchController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceSubBranchController -FallbackName=SequenceSubBranchController
#include "G01SeqSubBranchController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqSubBranchController : public ASequenceSubBranchController {
    GENERATED_BODY()
public:
    AG01SeqSubBranchController(const FObjectInitializer& ObjectInitializer);

};

