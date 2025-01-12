#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "G01VFXAppendInfo.h"
#include "VFXFinishDelegateDelegate.h"
#include "G01VFXObjectBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API AG01VFXObjectBase : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXFinishDelegate MVFXFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OwnActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OpponentActorArray;
    
public:
    AG01VFXObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VFXFinishCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopVFX();
    
    UFUNCTION(BlueprintCallable)
    void SetOwnActorArray(const TArray<AActor*>& InOwnActorArray);
    
    UFUNCTION(BlueprintCallable)
    void SetOpponentActorArray(const TArray<AActor*>& InOpponentActorArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVFX(const int32 InNo, const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InAppendInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVFXPlaying();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetOwnActor(int32 InNo);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetOpponentActor(int32 InNo);
    
};

