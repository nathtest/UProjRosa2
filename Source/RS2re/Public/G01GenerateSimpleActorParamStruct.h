#pragma once
#include "CoreMinimal.h"
#include "G01GenerateSimpleActorParamStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FG01GenerateSimpleActorParamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> GenerateActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    RS2RE_API FG01GenerateSimpleActorParamStruct();
};

