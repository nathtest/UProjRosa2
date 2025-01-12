#pragma once
#include "CoreMinimal.h"
#include "G01InventoryItemLogStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01InventoryItemLogStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAcquiredItOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcquiredCount;
    
    FG01InventoryItemLogStruct();
};

