#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "G01OnVFXStateChangedDelegate.h"
#include "G01VFXAppendInfo.h"
#include "G01VFXHandle.generated.h"

class AActor;
class AG01VFXPlayerBase;

UCLASS(Blueprintable)
class RS2RE_API UG01VFXHandle : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXID MVFXID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MVFXRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MVFXActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01VFXPlayerBase* MVFXActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnVFXStateChanged MOnVFXStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnVFXStateChanged MOnVFXFinished;
    
public:
    UG01VFXHandle();

    UFUNCTION(BlueprintCallable)
    bool StopVFX();
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroy(bool InIsAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    bool PlayVFX(const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InAppendInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishVFX();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedVFXActor(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsVFXResourceReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVFXPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVFXActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVFXRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVFXID GetVFXID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AG01VFXPlayerBase* GetVFXActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool DestroyVFXActor();
    
    UFUNCTION(BlueprintCallable)
    void DestroyHandle();
    
    UFUNCTION(BlueprintCallable)
    bool CreateVFXActor();
    
};

