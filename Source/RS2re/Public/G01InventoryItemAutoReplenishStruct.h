#pragma once
#include "CoreMinimal.h"
#include "G01InventoryItemAutoReplenishStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01InventoryItemAutoReplenishStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoReplenish;
    
    FG01InventoryItemAutoReplenishStruct();
};

