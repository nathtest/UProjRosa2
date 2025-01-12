#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADLayoutSoundComponent.h"
#include "SQEXSEADSphericalWedgeSoundComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USQEXSEADSphericalWedgeSoundComponent : public USQEXSEADLayoutSoundComponent {
    GENERATED_BODY()
public:
    USQEXSEADSphericalWedgeSoundComponent(const FObjectInitializer& ObjectInitializer);

};

