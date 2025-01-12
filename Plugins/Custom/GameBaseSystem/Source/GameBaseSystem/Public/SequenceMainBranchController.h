#pragma once
#include "CoreMinimal.h"
#include "SequenceBranchController.h"
#include "SequenceMainBranchController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceMainBranchController : public ASequenceBranchController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAllowBranchEvaluate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsExecuteBranchEvaluate;
    
public:
    ASequenceMainBranchController(const FObjectInitializer& ObjectInitializer);

};

