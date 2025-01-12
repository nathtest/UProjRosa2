#pragma once
#include "CoreMinimal.h"
#include "G01BattleEquipItemBase.h"
#include "G01BattleShieldItem.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleShieldItem : public FG01BattleEquipItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShieldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGuarderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerPercent;
    
    FG01BattleShieldItem();
};

