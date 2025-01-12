#pragma once
#include "CoreMinimal.h"
#include "G01CharacterID.h"
#include "G01ExpGrowthArtsStruct.h"
#include "G01ExpGrowthStatusStruct.h"
#include "G01ExpGrowthStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ExpGrowthStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ExpGrowthStatusStruct HPGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ExpGrowthStatusStruct BPGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ExpGrowthArtsStruct> ArtsGrowth;
    
    FG01ExpGrowthStruct();
};

