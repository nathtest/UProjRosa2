#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemParameter -FallbackName=DropItemParameter
#include "DropItemParameter.h"
#include "G01DropItemParameter.generated.h"

USTRUCT(BlueprintType)
struct FG01DropItemParameter : public FDropItemParameter {
    GENERATED_BODY()
public:
    RS2RE_API FG01DropItemParameter();
};

