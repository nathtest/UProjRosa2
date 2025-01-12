#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "G01FrameCaptureComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FrameCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* TextureTarget;
    
    UG01FrameCaptureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnRegistCallback();
    
    UFUNCTION(BlueprintCallable)
    void StopCaptureEveryFrame();
    
    UFUNCTION(BlueprintCallable)
    void StartCaptureEveryFrame();
    
    UFUNCTION(BlueprintCallable)
    void RegistCallback();
    
    UFUNCTION(BlueprintCallable)
    void CaptureScene();
    
};

