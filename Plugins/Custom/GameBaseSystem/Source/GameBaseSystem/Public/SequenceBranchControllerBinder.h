#pragma once
#include "CoreMinimal.h"
#include "SequenceActControllerBinderBase.h"
#include "SequenceBranchControllerBinder.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceBranchControllerBinder : public ASequenceActControllerBinderBase {
    GENERATED_BODY()
public:
    ASequenceBranchControllerBinder(const FObjectInitializer& ObjectInitializer);

};

