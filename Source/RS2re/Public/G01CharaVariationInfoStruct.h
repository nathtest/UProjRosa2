#pragma once
#include "CoreMinimal.h"
#include "EG01CharacterVariationType.h"
#include "G01CharacterID.h"
#include "G01CharaVariationInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01CharaVariationInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01CharacterVariationType VisualType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
    RS2RE_API FG01CharaVariationInfoStruct();
};

