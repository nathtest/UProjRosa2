#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuTabPage.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuTabPage -FallbackName=G01DebugMenuTabPage
#include "G01DebugQuestTabPage.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DebugQuestTabPage : public UG01DebugMenuTabPage {
    GENERATED_BODY()
public:
    UG01DebugQuestTabPage();

};

