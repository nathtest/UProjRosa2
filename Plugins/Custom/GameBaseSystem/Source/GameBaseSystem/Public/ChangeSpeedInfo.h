#pragma once
#include "CoreMinimal.h"
#include "ChangeSpeedInfo.generated.h"

USTRUCT(BlueprintType)
struct FChangeSpeedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSpeed;
    
    GAMEBASESYSTEM_API FChangeSpeedInfo();
};

