#pragma once
#include "CoreMinimal.h"
#include "EVABoneType.h"
#include "VABoneParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVABoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVABoneType MBoneType;
    
    FVABoneParam();
};

