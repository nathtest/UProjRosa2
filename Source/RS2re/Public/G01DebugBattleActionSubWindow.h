#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugBattleActionSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DebugBattleActionSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugBattleActionSubWindow();

};

