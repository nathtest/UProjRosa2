#pragma once
#include "CoreMinimal.h"
#include "EG01HudInformationTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EG01HudInformationTypeEnum : uint8 {
    FacilityBuild,
    FacilityConstruction,
    ImperialGuard,
    BlackSmith,
    SpellInstitute,
    NewField,
    ReleaseFriendClass,
    Formation,
    SkillDojo,
    AvalonGarden,
    EnemyLevel,
};

