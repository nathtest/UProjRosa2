#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "G01BattleEquipItemBase.h"
#include "G01BattleWeaponItem.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleWeaponItem : public FG01BattleEquipItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01BattleArtsType> ArtsTypeList;
    
    FG01BattleWeaponItem();
};

