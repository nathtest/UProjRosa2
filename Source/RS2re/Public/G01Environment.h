#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "G01EnvironmentObserverInf.h"
#include "G01Environment.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01Environment : public AActor, public IG01EnvironmentObserverInf {
    GENERATED_BODY()
public:
    AG01Environment(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

