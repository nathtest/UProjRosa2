#pragma once
#include "CoreMinimal.h"
#include "G01StoryHistoryCondition.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct RS2RE_API FG01StoryHistoryCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CutScene;
    
    FG01StoryHistoryCondition();
};

