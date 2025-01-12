#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01ItemArmorDataStruct.h"
#include "ShopFunctionLibrary.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UShopFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShopFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetShopFlag(FName RowName, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugShopFlag(UDataTable* Table, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void RequestShop(FName RowName, AActor* ActorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertAttackMagicDefence(const FG01ItemArmorDataStruct& InArmorData, int32& ReAttackDefence, int32& ReMagicDefence);
    
};

