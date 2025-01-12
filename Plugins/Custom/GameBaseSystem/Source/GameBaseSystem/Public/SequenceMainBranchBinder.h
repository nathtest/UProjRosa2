#pragma once
#include "CoreMinimal.h"
#include "SeqMainBranch_ChoiceBranchParam.h"
#include "SeqMainBranch_FlagBranchParam.h"
#include "SeqMainBranch_NextTrackIndexParam.h"
#include "SeqMainBranch_QuestSectionParam.h"
#include "SequenceBranchControllerBinder.h"
#include "Templates/SubclassOf.h"
#include "SequenceMainBranchBinder.generated.h"

class ASequenceMainBranchController;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceMainBranchBinder : public ASequenceBranchControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASequenceMainBranchController> MSupportControllerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASequenceMainBranchController* MainBranchController;
    
public:
    ASequenceMainBranchBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Cmd_TR_NextTrackByQuestProgress(FSeqMainBranch_QuestSectionParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_NextTrackByFlag(FSeqMainBranch_FlagBranchParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_NextTrackByChoice(FSeqMainBranch_ChoiceBranchParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_NextTrack(FSeqMainBranch_NextTrackIndexParam InParam);
    
};

