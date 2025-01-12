#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADLayoutSoundComponent.h"
#include "SQEXSEADLineSoundComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USQEXSEADLineSoundComponent : public USQEXSEADLayoutSoundComponent {
    GENERATED_BODY()
public:
    USQEXSEADLineSoundComponent(const FObjectInitializer& ObjectInitializer);

};

