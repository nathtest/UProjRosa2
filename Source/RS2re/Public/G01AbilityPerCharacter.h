#pragma once
#include "CoreMinimal.h"
#include "EG01InventoryItemEquiomentType.h"
#include "G01AbilityPerCharacter.generated.h"

class UG01AbilityEquipUnit;

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityPerCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01InventoryItemEquiomentType, UG01AbilityEquipUnit*> EquipUnitList;
    
    FG01AbilityPerCharacter();
};

