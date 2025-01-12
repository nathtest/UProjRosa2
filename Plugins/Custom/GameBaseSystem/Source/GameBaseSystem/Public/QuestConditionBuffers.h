#pragma once
#include "CoreMinimal.h"
#include "CollisionOverlapConditionBuffer.h"
#include "EventEndConditionBuffer.h"
#include "FlagCheckConditionBuffer.h"
#include "LevelTransitionConditionBuffer.h"
#include "QuestConditionBuffersBase.h"
#include "QuestEndConditionBuffer.h"
#include "QuestProgressConditionBuffer.h"
#include "SequencerFinishedConditionBuffer.h"
#include "TrialCheckConditionBuffer.h"
#include "QuestConditionBuffers.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestConditionBuffers : public FQuestConditionBuffersBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCollisionOverlapConditionBuffer CollisionOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEventEndConditionBuffer EventEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagCheckConditionBuffer FlagCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelTransitionConditionBuffer LevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestEndConditionBuffer QuestEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestProgressConditionBuffer QuestProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSequencerFinishedConditionBuffer SequencerFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTrialCheckConditionBuffer TrialCheck;
    
    FQuestConditionBuffers();
};

