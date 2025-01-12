#pragma once
#include "CoreMinimal.h"
#include "G01CharacterID.h"
#include "G01VariationCharaIDStruct.h"
#include "G01VariationCharaInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01VariationCharaInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VariationCharaIDStruct VariationCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
    RS2RE_API FG01VariationCharaInfoStruct();
};

