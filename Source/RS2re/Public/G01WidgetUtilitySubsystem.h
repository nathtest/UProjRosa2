#pragma once
#include "CoreMinimal.h"
#include "WidgetUtilitySubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=WidgetUtilitySubsystem -FallbackName=WidgetUtilitySubsystem
#include "G01WidgetUtilitySubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01WidgetUtilitySubsystem : public UWidgetUtilitySubsystem {
    GENERATED_BODY()
public:
    UG01WidgetUtilitySubsystem();

};

