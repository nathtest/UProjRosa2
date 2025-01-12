#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuTabPage.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuTabPage -FallbackName=G01DebugMenuTabPage
#include "G01DebugSettingFileTabPage.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DebugSettingFileTabPage : public UG01DebugMenuTabPage {
    GENERATED_BODY()
public:
    UG01DebugSettingFileTabPage();

};

