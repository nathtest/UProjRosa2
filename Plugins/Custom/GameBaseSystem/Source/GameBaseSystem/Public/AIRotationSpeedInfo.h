#pragma once
#include "CoreMinimal.h"
#include "EAISpeed.h"
#include "AIRotationSpeedInfo.generated.h"

USTRUCT(BlueprintType)
struct FAIRotationSpeedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAISpeed, float> MAIRotationSpeedByID;
    
    GAMEBASESYSTEM_API FAIRotationSpeedInfo();
};

