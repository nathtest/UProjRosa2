#pragma once
#include "CoreMinimal.h"
#include "OnGamePauseParams.generated.h"

USTRUCT(BlueprintType)
struct FOnGamePauseParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    GAMEBASESYSTEM_API FOnGamePauseParams();
};

