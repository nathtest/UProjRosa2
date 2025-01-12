#pragma once
#include "CoreMinimal.h"
#include "VAParamLookAffectedBone.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAParamLookAffectedBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    FVAParamLookAffectedBone();
};

