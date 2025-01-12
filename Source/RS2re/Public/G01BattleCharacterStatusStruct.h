#pragma once
#include "CoreMinimal.h"
#include "EG01MapAspectType.h"
#include "G01BattleCharacteristic.h"
#include "G01CharaDefence.h"
#include "G01CharaResistance.h"
#include "G01CharaStatus.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01BattleCharacterStatusStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCharacterStatusStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaStatus MBasicStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SkillLevel MSkillLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SpellLevel MSpellLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaDefence MDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaResistance MResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FamilyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<G01BattleCharacteristic> MCharacteristic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01MapAspectType> MMapAspectRecoverType;
    
    FG01BattleCharacterStatusStruct();
};

