#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01DebugBattleBossRecordActorSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugBattleBossRecordActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugBattleBossRecordActorSubWindow(const FObjectInitializer& ObjectInitializer);

};

