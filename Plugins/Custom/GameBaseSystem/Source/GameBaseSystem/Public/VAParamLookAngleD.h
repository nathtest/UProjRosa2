#pragma once
#include "CoreMinimal.h"
#include "VAParamLookAngleD.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAParamLookAngleD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MHorizon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MDown;
    
    FVAParamLookAngleD();
};

