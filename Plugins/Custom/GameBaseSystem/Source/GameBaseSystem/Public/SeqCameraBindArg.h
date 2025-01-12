#pragma once
#include "CoreMinimal.h"
#include "SeqCameraBindArg.generated.h"

class UCameraComponent;

USTRUCT(BlueprintType)
struct FSeqCameraBindArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MControlCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCameraID;
    
    GAMEBASESYSTEM_API FSeqCameraBindArg();
};

