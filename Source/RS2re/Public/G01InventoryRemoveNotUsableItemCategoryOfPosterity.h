#pragma once
#include "CoreMinimal.h"
#include "G01InventoryRemoveNotUsableItemCategoryOfPosterity.generated.h"

USTRUCT(BlueprintType)
struct FG01InventoryRemoveNotUsableItemCategoryOfPosterity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemCategoryList;
    
    RS2RE_API FG01InventoryRemoveNotUsableItemCategoryOfPosterity();
};

