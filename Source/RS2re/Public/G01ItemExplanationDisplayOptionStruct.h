#pragma once
#include "CoreMinimal.h"
#include "G01ItemExplanationDisplayOptionStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ItemExplanationDisplayOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideItemReplenish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverwriteDisplayIndex;
    
    FG01ItemExplanationDisplayOptionStruct();
};

