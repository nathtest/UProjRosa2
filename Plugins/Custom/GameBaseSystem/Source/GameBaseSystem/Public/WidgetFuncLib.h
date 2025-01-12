#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "WidgetDrawDataInfo.h"
#include "WidgetFuncLib.generated.h"

class UCanvasPanelSlot;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UWidgetFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWidgetFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool Func_SettingWidgetDrawData(UCanvasPanelSlot* InCanvasPanelSlot, FWidgetDrawDataInfo InWidgetDrawData);
    
    UFUNCTION(BlueprintCallable)
    static FWidgetDrawDataInfo Func_ExtractWidgetDrawData(UCanvasPanelSlot* InCanvasPanelSlot);
    
};

