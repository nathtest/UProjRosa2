#pragma once
#include "CoreMinimal.h"
#include "SeqCameraControllerBinderCine.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqCameraControllerBinderCine -FallbackName=SeqCameraControllerBinderCine
#include "EG01SeqCameraOffsetTargetType.h"
#include "G01CameraOffsetSettings.h"
#include "G01SeqCameraControllerBinderCine.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqCameraControllerBinderCine : public ASeqCameraControllerBinderCine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseCameraCharaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool MIsEnableTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EG01SeqCameraOffsetTargetType MOffsetTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> OffsetTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 MOffsetTargetSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CameraOffsetSettings MOffsetSettings;
    
public:
    AG01SeqCameraControllerBinderCine(const FObjectInitializer& ObjectInitializer);

};

