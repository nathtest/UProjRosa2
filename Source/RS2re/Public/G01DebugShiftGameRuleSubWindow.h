#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugShiftGameRuleSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DebugShiftGameRuleSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugShiftGameRuleSubWindow();

    UFUNCTION(BlueprintCallable)
    void SortByPriority(const TArray<FName>& In, TArray<FName>& Out);
    
};

