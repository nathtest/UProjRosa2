#pragma once
#include "CoreMinimal.h"
#include "G01VACcdikSettings.h"
#include "G01VAIkBoneChain.h"
#include "G01VAIkSettings.generated.h"

USTRUCT(BlueprintType)
struct FG01VAIkSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAIkBoneChain BoneChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeightCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VACcdikSettings CcdikSettings;
    
    RS2RE_API FG01VAIkSettings();
};

