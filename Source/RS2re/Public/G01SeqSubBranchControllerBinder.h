#pragma once
#include "CoreMinimal.h"
#include "SequenceSubBranchBinder.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceSubBranchBinder -FallbackName=SequenceSubBranchBinder
#include "G01SeqSubBranchControllerBinder.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqSubBranchControllerBinder : public ASequenceSubBranchBinder {
    GENERATED_BODY()
public:
    AG01SeqSubBranchControllerBinder(const FObjectInitializer& ObjectInitializer);

};

