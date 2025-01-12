#pragma once
#include "CoreMinimal.h"
#include "CamBindParam_Distance.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FCamBindParam_Distance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MTargetActors;
    
    FCamBindParam_Distance();
};

