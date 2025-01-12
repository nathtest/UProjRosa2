#pragma once
#include "CoreMinimal.h"
#include "ESequenceEndReason.h"
#include "SeqCategoryView.h"
#include "SequencePlayFinishParam.generated.h"

class ASequenceController;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FSequencePlayFinishParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* SequenceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqCategoryView MCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> MSequenceSoftObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceEndReason EndReason;
    
    GAMEBASESYSTEM_API FSequencePlayFinishParam();
};

