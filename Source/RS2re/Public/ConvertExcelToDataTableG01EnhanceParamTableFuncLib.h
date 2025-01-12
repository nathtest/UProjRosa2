#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConvertExcelToDataTableG01EnhanceParamTableFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UConvertExcelToDataTableG01EnhanceParamTableFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConvertExcelToDataTableG01EnhanceParamTableFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_TagName_Unique();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_TagName_Type();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_TagName_TurnCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_TagName_Tooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_TagName_Param();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_TagName_Defence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_SpiderNet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_SpellEnhance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Phlegm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Nutcracker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_HeatWind_Damage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_HeatWind();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_GoldenStrength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Frost_All();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Frost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_FlowingSlash();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_FaerieGlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_DragonPulse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_DivineLancer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_DeadlyDrive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_CrimsonFlare_Damage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_CrimsonFlare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Bonecrusher();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Blessing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Blaze_All();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Blaze();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_G01EnhanceParamTable_RowName_Berserker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FName> Get_G01EnhanceParamTable_RowName_All(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Get_DataTableName_G01EnhanceParamTable();
    
};

