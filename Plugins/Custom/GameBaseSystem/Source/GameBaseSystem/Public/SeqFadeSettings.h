#pragma once
#include "CoreMinimal.h"
#include "SeqFadeParam.h"
#include "SeqFadeSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqFadeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqFadeParam PreFadeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqFadeParam PostFadeParam;
    
    FSeqFadeSettings();
};

