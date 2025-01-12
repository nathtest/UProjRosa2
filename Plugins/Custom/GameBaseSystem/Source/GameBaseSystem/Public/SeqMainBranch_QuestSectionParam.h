#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.h"
#include "SeqMainBranch_Common.h"
#include "SeqMainBranch_QuestSectionParam.generated.h"

class AQuestObjectBase;

USTRUCT(BlueprintType)
struct FSeqMainBranch_QuestSectionParam : public FSeqMainBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> MTargetQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MSectionRangeBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MSectionRangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTrueNextTrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFalseNextTrackIndex;
    
    GAMEBASESYSTEM_API FSeqMainBranch_QuestSectionParam();
};

