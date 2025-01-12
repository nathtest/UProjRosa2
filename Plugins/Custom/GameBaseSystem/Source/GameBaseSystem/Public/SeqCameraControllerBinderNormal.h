#pragma once
#include "CoreMinimal.h"
#include "SequenceCameraControllerBinder.h"
#include "SeqCameraControllerBinderNormal.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASeqCameraControllerBinderNormal : public ASequenceCameraControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MCameraComponent;
    
public:
    ASeqCameraControllerBinderNormal(const FObjectInitializer& ObjectInitializer);

};

