#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "G01AbilityCharaStatusEffect.h"
#include "G01BattleCharacterInf.h"
#include "G01MenuWeaponPowerMessenger.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01MenuWeaponPowerMessenger : public AAppActor, public IG01BattleCharacterInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCharaStatusEffect StatusAbilityEffect;
    
    AG01MenuWeaponPowerMessenger(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

