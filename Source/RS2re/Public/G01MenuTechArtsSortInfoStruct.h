#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsTableRow.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01MenuTechArtsSortInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuTechArtsSortInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartyLearnArtsStruct PartyLearnArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleArtsTableRow BattleArtsTableRow;
    
    FG01MenuTechArtsSortInfoStruct();
};

