#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "AppActor.h"
#include "SequenceActionControllerBase.generated.h"

class ASequenceActControllerBinderBase;
class ASequenceController;
class UCustomLevelSequencePlayer;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceActionControllerBase : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* MOwnerSequenceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASequenceActControllerBinderBase*> MBinders;
    
public:
    ASequenceActionControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCustomLevelSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASequenceController* GetSequenceController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNowSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameNumber GetNowFrame() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_RequestEndSequence();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_PlaySequence();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_PauseSequence(bool InIsPauseCharaAnimation);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_EndSequence(float InDelaySeconds);
    
};

