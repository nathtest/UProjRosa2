#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01EventTriggerID.h"
#include "G01DebugChronicleActorSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugChronicleActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugChronicleActorSubWindow(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void LayoutPastEmperorTable();
    
    UFUNCTION(BlueprintCallable)
    void LayoutEventHistoryTable(const TArray<FG01EventTriggerID>& InEventTriggerIdList);
    
};

