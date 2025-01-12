#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentAilmentPoseStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentPoseStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAilmentPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFaintPose;
    
    RS2RE_API FG01AddedPotentAilmentPoseStruct();
};

