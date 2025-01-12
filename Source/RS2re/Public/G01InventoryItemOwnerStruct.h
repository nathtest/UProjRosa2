#pragma once
#include "CoreMinimal.h"
#include "EG01InventoryItemEquiomentType.h"
#include "G01CharacterID.h"
#include "G01InventoryItemOwnerStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01InventoryItemOwnerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01InventoryItemEquiomentType EquipmentType;
    
    FG01InventoryItemOwnerStruct();
};

