#pragma once
#include "CoreMinimal.h"
#include "GeneratorConditionCache.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FGeneratorConditionCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOkQuestProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOkFlag;
    
    FGeneratorConditionCache();
};

