#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01DebugFieldPlayerAutoInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UG01DebugFieldPlayerAutoInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01DebugFieldPlayerAutoInputComponent(const FObjectInitializer& ObjectInitializer);

};

