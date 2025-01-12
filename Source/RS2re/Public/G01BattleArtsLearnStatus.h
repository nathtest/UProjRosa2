#pragma once
#include "CoreMinimal.h"
#include "EG01PartyCharacterSkillType.h"
#include "EG01PartyCharacterSpellType.h"
#include "G01BattleArtsLearnStatus.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsLearnStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PartyCharacterSkillType SkillLevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillLevelBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PartyCharacterSpellType SpellLevelType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpellLevelBorder1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PartyCharacterSpellType SpellLevelType2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpellLevelBorder2;
    
    FG01BattleArtsLearnStatus();
};

