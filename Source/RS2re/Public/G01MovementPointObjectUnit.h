#pragma once
#include "CoreMinimal.h"
#include "G01MovementPointObjectUnit.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct RS2RE_API FG01MovementPointObjectUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Object;
    
    FG01MovementPointObjectUnit();
};

