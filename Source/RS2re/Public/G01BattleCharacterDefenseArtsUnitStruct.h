#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterArtsUnitBase.h"
#include "G01BattleCharacterDefenseArtsUnitStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCharacterDefenseArtsUnitStruct : public FG01BattleCharacterArtsUnitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefenseArtsId;
    
    FG01BattleCharacterDefenseArtsUnitStruct();
};

