#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EffectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectID -FallbackName=EffectID
#include "G01FXAppendInfo.h"
#include "G01FXPointInfo.h"
#include "G01OnEffectStateChangedDelegate.h"
#include "G01FXHandle.generated.h"

class AActor;
class AG01FXBase;

UCLASS(Blueprintable)
class RS2RE_API UG01FXHandle : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectID MFXID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MFxActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01FXBase* MFxActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnEffectStateChanged MOnEffectStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnEffectStateChanged MOnEffectFinished;
    
public:
    UG01FXHandle();

    UFUNCTION(BlueprintCallable)
    bool StopFX();
    
    UFUNCTION(BlueprintCallable)
    bool PlayFX(const TArray<FG01FXPointInfo>& InBasePointInfo, const TArray<FG01FXPointInfo>& InTargetPointInfo, const FG01FXAppendInfo& InFxAppendInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedFXActor(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFXResourceReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFXPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFxActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEffectID GetFXID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AG01FXBase* GetFxActor() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyHandle();
    
    UFUNCTION(BlueprintCallable)
    bool DestroyFXActor();
    
    UFUNCTION(BlueprintCallable)
    bool CreateFXActor();
    
};

