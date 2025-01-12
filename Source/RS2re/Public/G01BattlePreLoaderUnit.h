#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "G01BattlePreLoaderRequestArg.h"
#include "G01BattlePreLoaderUnit.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattlePreLoaderUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattlePreLoaderRequestArg RequestArg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> PathList;
    
    FG01BattlePreLoaderUnit();
};

