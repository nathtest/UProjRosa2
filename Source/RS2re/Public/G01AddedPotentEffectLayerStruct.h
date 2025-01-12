#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentEffectStruct.h"
#include "G01AddedPotentEffectLayerStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentEffectLayerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentEffectStruct> EffectList;
    
    RS2RE_API FG01AddedPotentEffectLayerStruct();
};

