#pragma once
#include "CoreMinimal.h"
#include "G01InventoryItemAutoReplenishStruct.h"
#include "G01InventoryItemLogStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01InventorySubsystemExtractionStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01InventorySubsystemExtractionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MItemInventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MMementoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemAutoReplenishStruct> AutoReplenishList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemLogStruct> ItemLogList;
    
    RS2RE_API FG01InventorySubsystemExtractionStruct();
};

