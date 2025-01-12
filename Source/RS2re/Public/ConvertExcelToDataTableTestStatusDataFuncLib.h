#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConvertExcelToDataTableTestStatusDataFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UConvertExcelToDataTableTestStatusDataFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConvertExcelToDataTableTestStatusDataFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_TagName_Speed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_TagName_Power();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_TagName_HP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_TagName_Defence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_RowName_eee();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_RowName_ddd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_RowName_ccc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_RowName_bbb();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> Get_TestStatusData_RowName_All(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestStatusData_RowName_aaa();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_DataTableName_TestStatusData();
    
};

