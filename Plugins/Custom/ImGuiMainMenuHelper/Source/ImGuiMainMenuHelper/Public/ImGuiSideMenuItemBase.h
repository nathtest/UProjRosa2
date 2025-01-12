#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ImGuiSideMenuItemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class IMGUIMAINMENUHELPER_API UImGuiSideMenuItemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UImGuiSideMenuItemBase();

};

