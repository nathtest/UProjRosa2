#pragma once
#include "CoreMinimal.h"
#include "WidgetManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=WidgetManager -FallbackName=WidgetManager
#include "G01WidgetManagerInf.h"
#include "G01WidgetManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01WidgetManager : public AWidgetManager, public IG01WidgetManagerInf {
    GENERATED_BODY()
public:
    AG01WidgetManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

