#pragma once
#include "CoreMinimal.h"
#include "SequenceMainBranchBinder.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceMainBranchBinder -FallbackName=SequenceMainBranchBinder
#include "G01SeqMainBranch_PurchaseBranchParam.h"
#include "G01SeqMainBranchControllerBinder.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqMainBranchControllerBinder : public ASequenceMainBranchBinder {
    GENERATED_BODY()
public:
    AG01SeqMainBranchControllerBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Cmd_TR_NextTrackByPurchaseResult(FG01SeqMainBranch_PurchaseBranchParam InParam);
    
};

