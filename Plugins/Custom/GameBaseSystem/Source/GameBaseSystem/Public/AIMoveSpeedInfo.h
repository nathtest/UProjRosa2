#pragma once
#include "CoreMinimal.h"
#include "EAISpeed.h"
#include "AIMoveSpeedInfo.generated.h"

USTRUCT(BlueprintType)
struct FAIMoveSpeedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAISpeed, float> MAIMoveSpeedByID;
    
    GAMEBASESYSTEM_API FAIMoveSpeedInfo();
};

