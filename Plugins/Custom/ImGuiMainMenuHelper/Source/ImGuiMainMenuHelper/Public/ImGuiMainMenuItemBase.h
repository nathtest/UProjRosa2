#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ImGuiMainMenuItemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class IMGUIMAINMENUHELPER_API UImGuiMainMenuItemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UImGuiMainMenuItemBase();

};

