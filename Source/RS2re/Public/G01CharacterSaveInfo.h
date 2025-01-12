#pragma once
#include "CoreMinimal.h"
#include "EG01CharacterVariationType.h"
#include "EG01CharacterVisualType.h"
#include "G01CharacterID.h"
#include "G01VariationCharaIDStruct.h"
#include "G01CharacterSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01CharacterSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, EG01CharacterVisualType> CharacterVisualTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01VariationCharaIDStruct, EG01CharacterVariationType> CharacterVariationTypeList;
    
    RS2RE_API FG01CharacterSaveInfo();
};

