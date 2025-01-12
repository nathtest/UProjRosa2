#pragma once
#include "CoreMinimal.h"
#include "VFXPlayerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXPlayerBase -FallbackName=VFXPlayerBase
#include "G01VFXAppendInfo.h"
#include "VFXPlayerFinishDelegateDelegate.h"
#include "G01VFXPlayerBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API AG01VFXPlayerBase : public AVFXPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXPlayerFinishDelegate MVFXFinishDelegate;
    
public:
    AG01VFXPlayerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VFXFinishCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVFX(const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InAppendInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVFXPlaying();
    
};

