#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.h"
#include "SequencePlayPauseParam.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSequencePlayPauseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqCategoryView MCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> MSequenceSoftObject;
    
    GAMEBASESYSTEM_API FSequencePlayPauseParam();
};

