#pragma once
#include "CoreMinimal.h"
#include "DropItem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItem -FallbackName=DropItem
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "G01FieldItemIDStruct.h"
#include "G01GimmickObjectBase.h"
#include "G01WhirlpoolBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01WhirlpoolBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
    AG01WhirlpoolBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void LotteryDropItem(FDropItemTableID InDropItemID, FG01FieldItemIDStruct InFieldItemID, bool& OutSuccess, bool& OutInvalidDropItemID, FDropItem& OutDropItem);
    
};

