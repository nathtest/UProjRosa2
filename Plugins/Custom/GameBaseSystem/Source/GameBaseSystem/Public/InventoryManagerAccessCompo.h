#pragma once
#include "CoreMinimal.h"
#include "EItemTypeID.h"
#include "ItemStructInfo.h"
#include "ManagerAccessor.h"
#include "InventoryManagerAccessCompo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UInventoryManagerAccessCompo : public UManagerAccessor {
    GENERATED_BODY()
public:
    UInventoryManagerAccessCompo(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SubItem(FItemStructInfo InItemInfo);
    
    UFUNCTION(BlueprintCallable)
    TArray<FItemStructInfo> GetItemByItemTypeID(EItemTypeID InItemTypeID);
    
    UFUNCTION(BlueprintCallable)
    bool AddItemByID(FName InItemID, int32 InItemNum);
    
};

