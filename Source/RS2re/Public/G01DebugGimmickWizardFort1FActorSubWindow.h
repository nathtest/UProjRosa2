#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01DebugGimmickWizardFort1FActorSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugGimmickWizardFort1FActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugGimmickWizardFort1FActorSubWindow(const FObjectInitializer& ObjectInitializer);

};

