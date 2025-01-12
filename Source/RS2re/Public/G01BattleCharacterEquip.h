#pragma once
#include "CoreMinimal.h"
#include "G01BattleShieldItem.h"
#include "G01BattleWeaponItem.h"
#include "G01BattleCharacterEquip.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCharacterEquip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedWeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleWeaponItem> WeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleShieldItem> ShieldSlot;
    
    FG01BattleCharacterEquip();
};

