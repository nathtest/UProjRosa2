#pragma once
#include "CoreMinimal.h"
#include "G01VAIkBoneChain.generated.h"

USTRUCT(BlueprintType)
struct FG01VAIkBoneChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeginBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndBoneName;
    
    RS2RE_API FG01VAIkBoneChain();
};

