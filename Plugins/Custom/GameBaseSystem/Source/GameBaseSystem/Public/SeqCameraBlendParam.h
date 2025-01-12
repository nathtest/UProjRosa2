#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendFunction -FallbackName=EViewTargetBlendFunction
#include "SeqCameraBlendParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqCameraBlendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MBlendFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> MBlendFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MBlendExp;
    
    GAMEBASESYSTEM_API FSeqCameraBlendParam();
};

