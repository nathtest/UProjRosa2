#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "G01ScreenCaptureObserverInf.h"
#include "G01FrameGrabberActor.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable)
class RS2RE_API AG01FrameGrabberActor : public AActor, public IG01ScreenCaptureObserverInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WidgetMaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CaptureFrameTexture;
    
    AG01FrameGrabberActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    bool StartFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetCaptureFrameTexture();
    

    // Fix for true pure virtual functions not being implemented
};

