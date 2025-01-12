#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConvertExcelToDataTableTestBaseDataFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UConvertExcelToDataTableTestBaseDataFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConvertExcelToDataTableTestBaseDataFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Wait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Status();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Name();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Like();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Job();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Height();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Gender();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Dislike();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_TagName_Age();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_RowName_eee();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_RowName_ddd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_RowName_ccc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_RowName_bbb();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> Get_TestBaseData_RowName_All(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestBaseData_RowName_aaa();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_DataTableName_TestBaseData();
    
};

