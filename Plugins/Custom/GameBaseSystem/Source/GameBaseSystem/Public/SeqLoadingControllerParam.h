#pragma once
#include "CoreMinimal.h"
#include "SequenceLoadSettings.h"
#include "SeqLoadingControllerParam.generated.h"

class ASequenceController;

USTRUCT(BlueprintType)
struct FSeqLoadingControllerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceLoadSettings Settings;
    
    GAMEBASESYSTEM_API FSeqLoadingControllerParam();
};

