#pragma once
#include "CoreMinimal.h"
#include "G01CrowdEncountInfo.h"
#include "G01GeneratorCrowdEncountInfo.generated.h"

class AG01CrowdActionDirectorBase;

USTRUCT(BlueprintType)
struct FG01GeneratorCrowdEncountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrowdTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrowdBattleTableId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CrowdEncountInfo CrowdEncountInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AG01CrowdActionDirectorBase> CrowdActionDirector;
    
    RS2RE_API FG01GeneratorCrowdEncountInfo();
};

