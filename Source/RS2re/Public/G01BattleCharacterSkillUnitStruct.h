#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterArtsUnitBase.h"
#include "G01BattleCharacterSkillUnitStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCharacterSkillUnitStruct : public FG01BattleCharacterArtsUnitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSkillArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MWeaponId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUniqueWeaponArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CorrectBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDecreaseByAbility;
    
    FG01BattleCharacterSkillUnitStruct();
};

