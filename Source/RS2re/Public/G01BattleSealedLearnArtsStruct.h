#pragma once
#include "CoreMinimal.h"
#include "G01MenuPartyLearnArtsListStruct.h"
#include "G01BattleSealedLearnArtsStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSealedLearnArtsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MenuPartyLearnArtsListStruct SkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MenuPartyLearnArtsListStruct SpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MenuPartyLearnArtsListStruct FathomList;
    
    FG01BattleSealedLearnArtsStruct();
};

