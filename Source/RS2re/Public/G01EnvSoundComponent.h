#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "G01EnvSoundComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01EnvSoundComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UG01EnvSoundComponent(const FObjectInitializer& ObjectInitializer);

};

