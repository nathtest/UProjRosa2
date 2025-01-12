#pragma once
#include "CoreMinimal.h"
#include "VFXRequestTypeData.generated.h"

USTRUCT(BlueprintType)
struct FVFXRequestTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName MVFXType;
    
    GAMEBASESYSTEM_API FVFXRequestTypeData();
};

