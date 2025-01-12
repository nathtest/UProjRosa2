#pragma once
#include "CoreMinimal.h"
#include "CameraManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CameraManagerBase -FallbackName=CameraManagerBase
#include "G01CameraManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01CameraManager : public ACameraManagerBase {
    GENERATED_BODY()
public:
    AG01CameraManager(const FObjectInitializer& ObjectInitializer);

};

