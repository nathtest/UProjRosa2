#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentDetailsBlockStruct.h"
#include "G01AddedPotentSimpleBlockStruct.h"
#include "G01AddedPotentBlockStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentBlockStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentSimpleBlockStruct> Simple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentDetailsBlockStruct> Details;
    
    RS2RE_API FG01AddedPotentBlockStruct();
};

