#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADLayoutSoundComponent.h"
#include "SQEXSEADCylindricalSectorSoundComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USQEXSEADCylindricalSectorSoundComponent : public USQEXSEADLayoutSoundComponent {
    GENERATED_BODY()
public:
    USQEXSEADCylindricalSectorSoundComponent(const FObjectInitializer& ObjectInitializer);

};

