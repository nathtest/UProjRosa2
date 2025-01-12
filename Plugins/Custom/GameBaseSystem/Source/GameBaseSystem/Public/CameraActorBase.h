#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "CameraActorBase.generated.h"

class ACameraActorBase;
class UCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACameraActorBase : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* MSprintArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSpringArmInterpAlpha;
    
public:
    ACameraActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpringArmLength(float InLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpringArmComponent* GetSpringArmComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UCameraComponent* GetCameraComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CopyCameraParams(ACameraActorBase* InSource, bool InIsCopyTransform);
    
    UFUNCTION(BlueprintCallable)
    void AddSpringArmLength(float InAddValue);
    
};

