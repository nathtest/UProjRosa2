#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugBattleStatusSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DebugBattleStatusSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugBattleStatusSubWindow();

};

