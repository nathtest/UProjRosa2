#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01LipAnimData.h"
#include "G01LipAnimTableRow.h"
#include "G01LipSyncFuncLib.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UG01LipSyncFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01LipSyncFuncLib();

    UFUNCTION(BlueprintCallable)
    static void Func_UpdateLipSyncAnimTable(UDataTable* InTable, const TMap<FName, FG01LipAnimTableRow>& InAnimData);
    
    UFUNCTION(BlueprintCallable)
    static FName Func_GetLipSyncAnimSlotName();
    
    UFUNCTION(BlueprintCallable)
    static void Func_ConvAssetDataToLipAnimData(const FAssetData& InAssetData, bool& ReIsSuccess, FG01LipAnimData& ReAnimData);
    
};

