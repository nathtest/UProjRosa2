#pragma once
#include "CoreMinimal.h"
#include "EG01PartyCharacterSkillType.h"
#include "G01BattleSkillLearnTerm.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSkillLearnTerm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PartyCharacterSkillType MLevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MLevelBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MWeaponId;
    
    FG01BattleSkillLearnTerm();
};

