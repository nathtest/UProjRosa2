#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConvertExcelToDataTableTestANGEINASWEOINFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UConvertExcelToDataTableTestANGEINASWEOINFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConvertExcelToDataTableTestANGEINASWEOINFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestANGEINASWEOIN_TagName_Name();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestANGEINASWEOIN_TagName_HP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestANGEINASWEOIN_RowName_eee();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestANGEINASWEOIN_RowName_ddd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestANGEINASWEOIN_RowName_ccc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestANGEINASWEOIN_RowName_bbb();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> Get_TestANGEINASWEOIN_RowName_All(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_TestANGEINASWEOIN_RowName_aaa();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_DataTableName_TestANGEINASWEOIN();
    
};

