#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugCsvDataTableSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DebugCsvDataTableSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugCsvDataTableSubWindow();

    UFUNCTION(BlueprintCallable)
    void DrawTable(const FName& InTableName, const FText& InFilterText);
    
};

