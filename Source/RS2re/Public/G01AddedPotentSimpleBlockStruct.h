#pragma once
#include "CoreMinimal.h"
#include "EG01AddedPotentBlockEnum.h"
#include "G01AddedPotentCategoryKeyStruct.h"
#include "G01AddedPotentSimpleBlockStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentSimpleBlockStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentCategoryKeyStruct CategoryKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AddedPotentBlockEnum BlockType;
    
    RS2RE_API FG01AddedPotentSimpleBlockStruct();
};

