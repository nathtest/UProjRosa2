#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "EG01ItemUsageType.h"
#include "G01BattleManagerObserverInf.h"
#include "G01InventoryItemAutoReplenishStruct.h"
#include "G01InventoryItemLogStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01InventoryManagerInterface.h"
#include "G01InventoryRemoveNotUsableItemCategoryOfPosterity.h"
#include "ManagerBase.h"
#include "G01InventoryManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01InventoryManager : public AManagerBase, public IG01InventoryManagerInterface, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MItemInventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MMementoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemAutoReplenishStruct> AutoReplenishList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemLogStruct> ItemLogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01ItemUsageType, FG01InventoryRemoveNotUsableItemCategoryOfPosterity> NotUsableItemOfPosterityList;
    
public:
    AG01InventoryManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

