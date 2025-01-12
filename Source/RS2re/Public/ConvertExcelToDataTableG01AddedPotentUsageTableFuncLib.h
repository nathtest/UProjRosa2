#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConvertExcelToDataTableG01AddedPotentUsageTableFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UConvertExcelToDataTableG01AddedPotentUsageTableFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConvertExcelToDataTableG01AddedPotentUsageTableFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentUsageTable_TagName_PulldownTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentUsageTable_RowName_EXTERNAL_GRANT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentUsageTable_RowName_EXTERNAL_DEPRIVATION();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentUsageTable_RowName_ENHANCE_GRANT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentUsageTable_RowName_ENHANCE_DEPRIVATION();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> Get_G01AddedPotentUsageTable_RowName_All(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentUsageTable_RowName_AILMENT_GRANT();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01AddedPotentUsageTable_RowName_AILMENT_DEPRIVATION();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_DataTableName_G01AddedPotentUsageTable();
    
};

