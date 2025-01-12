#pragma once
#include "CoreMinimal.h"
#include "SequenceActionControllerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceActionControllerBase -FallbackName=SequenceActionControllerBase
#include "G01SeqWeaponController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqWeaponController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
    AG01SeqWeaponController(const FObjectInitializer& ObjectInitializer);

};

