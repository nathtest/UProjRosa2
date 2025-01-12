#pragma once
#include "CoreMinimal.h"
#include "ESequenceLoadFadeType.h"
#include "SeqFadeParam.h"
#include "SequenceLoadSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSequenceLoadSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceLoadFadeType FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqFadeParam PreFadeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqFadeParam PostFadeParam;
    
    FSequenceLoadSettings();
};

