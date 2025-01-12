#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADLayoutSoundComponent.h"
#include "SQEXSEADTriangleStripSoundComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USQEXSEADTriangleStripSoundComponent : public USQEXSEADLayoutSoundComponent {
    GENERATED_BODY()
public:
    USQEXSEADTriangleStripSoundComponent(const FObjectInitializer& ObjectInitializer);

};

