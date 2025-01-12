#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "G01BattleCacheLoadObjectArg.h"
#include "G01BattleCacheLoadRequestArg.h"
#include "G01BattleCacheLoadUnit.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCacheLoadUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleCacheLoadObjectArg> LoadObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> PathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleCacheLoadRequestArg LoadRequest;
    
    FG01BattleCacheLoadUnit();
};

