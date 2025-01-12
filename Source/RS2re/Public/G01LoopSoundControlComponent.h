#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01LoopSoundControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01LoopSoundControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01LoopSoundControlComponent(const FObjectInitializer& ObjectInitializer);

};

