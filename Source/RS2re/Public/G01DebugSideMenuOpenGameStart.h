#pragma once
#include "CoreMinimal.h"
#include "ImGuiSideMenuItemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiMainMenuHelper -ObjectName=ImGuiSideMenuItemBase -FallbackName=ImGuiSideMenuItemBase
#include "G01DebugSideMenuOpenGameStart.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DebugSideMenuOpenGameStart : public UImGuiSideMenuItemBase {
    GENERATED_BODY()
public:
    UG01DebugSideMenuOpenGameStart();

};

