#pragma once
#include "CoreMinimal.h"
#include "G01InventoryItemAutoReplenishStruct.h"
#include "G01InventoryItemLogStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01InventorySubsystemExtractionStruct.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01InventorySubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01InventorySubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MItemInventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MCacheItemInventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MMementoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemAutoReplenishStruct> AutoReplenishList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemLogStruct> ItemLogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01InventorySubsystemExtractionStruct ItemData;
    
public:
    UG01InventorySubsystem();

};

