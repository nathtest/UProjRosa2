#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.h"
#include "SeqSubBranch_Common.h"
#include "SeqSubBranch_FrameJumpByQuestProgress.generated.h"

class AQuestObjectBase;

USTRUCT(BlueprintType)
struct FSeqSubBranch_FrameJumpByQuestProgress : public FSeqSubBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> MTargetQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MSectionRangeBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MSectionRangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTrueJumpFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFalseJumpFrame;
    
    GAMEBASESYSTEM_API FSeqSubBranch_FrameJumpByQuestProgress();
};

