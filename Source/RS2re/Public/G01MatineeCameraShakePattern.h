#pragma once
#include "CoreMinimal.h"
#include "MatineeCameraShake.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=MatineeCameraShakePattern -FallbackName=MatineeCameraShakePattern
#include "G01MatineeCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01MatineeCameraShakePattern : public UMatineeCameraShakePattern {
    GENERATED_BODY()
public:
    UG01MatineeCameraShakePattern();

};
