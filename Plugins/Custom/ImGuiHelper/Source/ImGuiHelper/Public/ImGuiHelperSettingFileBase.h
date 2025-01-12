#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ImGuiHelperSettingFileBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UImGuiHelperSettingFileBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UImGuiHelperSettingFileBase();

};

