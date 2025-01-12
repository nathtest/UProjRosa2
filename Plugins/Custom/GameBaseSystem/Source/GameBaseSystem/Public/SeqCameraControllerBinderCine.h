#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLookatTrackingSettings -FallbackName=CameraLookatTrackingSettings
#include "SequenceCameraControllerBinder.h"
#include <CineCameraActor.h>
#include "CineCameraComponent.h"
#include "SeqCameraControllerBinderCine.generated.h"

class UCineCameraComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASeqCameraControllerBinderCine : public ASequenceCameraControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLookatTrackingSettings MLookatTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* MCineCameraComponent;
    
public:
    ASeqCameraControllerBinderCine(const FObjectInitializer& ObjectInitializer);

};

