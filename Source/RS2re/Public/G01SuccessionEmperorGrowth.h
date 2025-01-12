#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "G01CharaClassID.h"
#include "G01SuccessionEmperorGrowth.generated.h"

USTRUCT(BlueprintType)
struct FG01SuccessionEmperorGrowth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaClassID MClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01BattleArtsType, int32> MGrowth;
    
    RS2RE_API FG01SuccessionEmperorGrowth();
};

