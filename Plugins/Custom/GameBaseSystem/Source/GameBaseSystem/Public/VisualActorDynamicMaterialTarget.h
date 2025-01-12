#pragma once
#include "CoreMinimal.h"
#include "VisualActorDynamicMaterialTarget.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVisualActorDynamicMaterialTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialNameWildcard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    FVisualActorDynamicMaterialTarget();
};

