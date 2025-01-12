#pragma once
#include "CoreMinimal.h"
#include "GeneratorArray.generated.h"

class AGeneratorBase;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FGeneratorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGeneratorBase*> MGenerators;
    
    FGeneratorArray();
};

