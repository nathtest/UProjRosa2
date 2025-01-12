#pragma once
#include "CoreMinimal.h"
#include "PlayerVisibilityParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FPlayerVisibilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RegisterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    FPlayerVisibilityParam();
};

