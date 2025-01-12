#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConvertExcelToDataTableG01AddedPotentBlockTableFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UConvertExcelToDataTableG01AddedPotentBlockTableFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConvertExcelToDataTableG01AddedPotentBlockTableFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentBlockTable_TagName_PulldownTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentBlockTable_RowName_REMOVE_ME();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentBlockTable_RowName_PASS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentBlockTable_RowName_BLOCK();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> Get_G01AddedPotentBlockTable_RowName_All(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_DataTableName_G01AddedPotentBlockTable();
    
};

