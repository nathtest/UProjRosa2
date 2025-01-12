#pragma once
#include "CoreMinimal.h"
#include "EItemTypeID.h"
#include "ItemData.h"
#include "ItemStructInfo.h"
#include "ManagerBase.h"
#include "Smp_InventoryManagerBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASmp_InventoryManagerBase : public AManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemListDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemData> MItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemStructInfo> MItemInfos;
    
public:
    ASmp_InventoryManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SubItem(FItemStructInfo InItemInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetItemReportToQuest(FItemStructInfo InItemInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetItemNameByItemID(FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FItemStructInfo> GetItemByItemTypeID(EItemTypeID InItemTypeID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FItemStructInfo> GetAllItem();
    
    UFUNCTION(BlueprintCallable)
    bool AddItemByID(FName InItemID, int32 InGetNum);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(FItemStructInfo InItemInfo);
    
};

