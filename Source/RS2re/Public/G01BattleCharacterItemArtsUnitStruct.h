#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterArtsUnitBase.h"
#include "G01BattleCharacterItemArtsUnitStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCharacterItemArtsUnitStruct : public FG01BattleCharacterArtsUnitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemArtsId;
    
    FG01BattleCharacterItemArtsUnitStruct();
};

