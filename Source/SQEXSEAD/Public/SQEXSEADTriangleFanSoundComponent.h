#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADLayoutSoundComponent.h"
#include "SQEXSEADTriangleFanSoundComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USQEXSEADTriangleFanSoundComponent : public USQEXSEADLayoutSoundComponent {
    GENERATED_BODY()
public:
    USQEXSEADTriangleFanSoundComponent(const FObjectInitializer& ObjectInitializer);

};

