#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "FXFinishDelegateDelegate.h"
#include "G01FXAppendInfo.h"
#include "G01FXPointInfo.h"
#include "G01FXBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FXBase : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFXFinishDelegate MFXFinishDelegate;
    
public:
    AG01FXBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFX(const TArray<FG01FXPointInfo>& InBasePointInfo, const TArray<FG01FXPointInfo>& InTargetPointInfo, const FG01FXAppendInfo& InFxAppendInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFXPlaying();
    
    UFUNCTION(BlueprintCallable)
    void FXFinishCallback();
    
};

