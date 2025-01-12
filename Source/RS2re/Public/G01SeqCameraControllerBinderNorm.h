#pragma once
#include "CoreMinimal.h"
#include "SeqCameraControllerBinderNormal.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqCameraControllerBinderNormal -FallbackName=SeqCameraControllerBinderNormal
#include "G01SeqCameraControllerBinderNorm.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqCameraControllerBinderNorm : public ASeqCameraControllerBinderNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseCameraCharaOffset;
    
public:
    AG01SeqCameraControllerBinderNorm(const FObjectInitializer& ObjectInitializer);

};

