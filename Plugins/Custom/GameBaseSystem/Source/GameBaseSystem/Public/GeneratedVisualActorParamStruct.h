#pragma once
#include "CoreMinimal.h"
#include "GeneratedVisualActorParamStruct.generated.h"

class AVisualActor;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FGeneratedVisualActorParamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisualActor* MGeneratedVisualActor;
    
    FGeneratedVisualActorParamStruct();
};

