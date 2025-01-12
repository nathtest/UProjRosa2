#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackCommonParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FForceFeedbackCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    FForceFeedbackCommonParams();
};

