#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.h"
#include "SequencePlayStartParam.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSequencePlayStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqCategoryView MCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> MSequenceSoftObject;
    
    GAMEBASESYSTEM_API FSequencePlayStartParam();
};

