#pragma once
#include "CoreMinimal.h"
#include "TransitionManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=TransitionManagerBase -FallbackName=TransitionManagerBase
#include "G01TransitionManagerInterface.h"
#include "OnCaptureCompleteDelegate.h"
#include "G01TransitionManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01TransitionManager : public ATransitionManagerBase, public IG01TransitionManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureComplete MOnCaptureComplete;
    
    AG01TransitionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartTransition(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCapture(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTransitionType(int32 InNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCompleteCapture();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCaptureComplete();
    

    // Fix for true pure virtual functions not being implemented
};

