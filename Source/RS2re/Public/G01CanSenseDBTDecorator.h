#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTDecorator -FallbackName=AppBTDecorator
#include "AppBTDecorator.h"
#include "G01CanSenseDBTDecorator.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CanSenseDBTDecorator : public UAppBTDecorator {
    GENERATED_BODY()
public:
    UG01CanSenseDBTDecorator();

};

