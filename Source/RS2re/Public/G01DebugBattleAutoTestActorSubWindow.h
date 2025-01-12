#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01DebugBattleAutoTestActorSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugBattleAutoTestActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugBattleAutoTestActorSubWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ScreenshotWithFilename(const FString& InFilename, bool InIsShowUi);
    
};

