#pragma once
#include "CoreMinimal.h"
#include "ESoundCategoryID.h"
#include "ESoundLoadType.h"
#include "SoundLoadingParam.generated.h"

USTRUCT(BlueprintType)
struct FSoundLoadingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundLoadType MLoadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundCategoryID MSoundCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSoundID;
    
    GAMEBASESYSTEM_API FSoundLoadingParam();
};

