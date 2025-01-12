#pragma once
#include "CoreMinimal.h"
#include "G01VisualActorSubAnimInstParams.generated.h"

class UG01VisualActorParamDataAsset;

USTRUCT(BlueprintType)
struct FG01VisualActorSubAnimInstParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01VisualActorParamDataAsset* VisualActorParamAsset;
    
    RS2RE_API FG01VisualActorSubAnimInstParams();
};

