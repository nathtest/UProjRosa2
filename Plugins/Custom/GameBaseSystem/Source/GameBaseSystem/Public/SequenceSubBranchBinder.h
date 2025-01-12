#pragma once
#include "CoreMinimal.h"
#include "SeqSubBranch_FrameJumpByChoice.h"
#include "SeqSubBranch_FrameJumpByFlag.h"
#include "SeqSubBranch_FrameJumpByQuestProgress.h"
#include "SeqSubBranch_JumpFrame.h"
#include "SequenceBranchControllerBinder.h"
#include "Templates/SubclassOf.h"
#include "SequenceSubBranchBinder.generated.h"

class ASequenceSubBranchController;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceSubBranchBinder : public ASequenceBranchControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASequenceSubBranchController> MSupportControllerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceSubBranchController* MSubBranchController;
    
public:
    ASequenceSubBranchBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Cmd_TR_FrameJumpByQuestProgress(FSeqSubBranch_FrameJumpByQuestProgress InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_FrameJumpByFlag(FSeqSubBranch_FrameJumpByFlag InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_FrameJumpByChoice(FSeqSubBranch_FrameJumpByChoice InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_FrameJump(FSeqSubBranch_JumpFrame InParam);
    
};

