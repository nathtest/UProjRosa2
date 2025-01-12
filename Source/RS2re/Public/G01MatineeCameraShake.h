#pragma once
#include "CoreMinimal.h"
#include "MatineeCameraShake.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=MatineeCameraShake -FallbackName=MatineeCameraShake
#include "G01MatineeCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01MatineeCameraShake : public UMatineeCameraShake {
    GENERATED_BODY()
public:
    UG01MatineeCameraShake();

};

