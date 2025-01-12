#pragma once
#include "CoreMinimal.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01MenuPartyLearnArtsListStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuPartyLearnArtsListStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> PartyLearnArtsList;
    
    FG01MenuPartyLearnArtsListStruct();
};

