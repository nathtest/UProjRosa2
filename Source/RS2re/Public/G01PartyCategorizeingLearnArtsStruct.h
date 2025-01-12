#pragma once
#include "CoreMinimal.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01PartyCategorizeingLearnArtsStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PartyCategorizeingLearnArtsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> SkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> SpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> FathomList;
    
    FG01PartyCategorizeingLearnArtsStruct();
};

