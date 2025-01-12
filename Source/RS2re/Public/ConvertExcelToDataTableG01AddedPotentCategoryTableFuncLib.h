#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConvertExcelToDataTableG01AddedPotentCategoryTableFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UConvertExcelToDataTableG01AddedPotentCategoryTableFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConvertExcelToDataTableG01AddedPotentCategoryTableFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_TagName_PulldownTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_RowName_Other();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_RowName_MagicShield();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_RowName_GetArts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_RowName_Debuff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_RowName_CounterParry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_RowName_Buff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentCategoryTable_RowName_Aura();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> Get_G01AddedPotentCategoryTable_RowName_All(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_DataTableName_G01AddedPotentCategoryTable();
    
};

