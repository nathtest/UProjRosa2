#pragma once
#include "CoreMinimal.h"
#include "ScreenTransitionOutCache.generated.h"

USTRUCT(BlueprintType)
struct FScreenTransitionOutCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChecking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionTime;
    
    GAMEBASESYSTEM_API FScreenTransitionOutCache();
};

