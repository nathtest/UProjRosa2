#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "G01ExpGrowthArtsStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ExpGrowthArtsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleArtsType ArtsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FG01ExpGrowthArtsStruct();
};

