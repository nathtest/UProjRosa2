#pragma once
#include "CoreMinimal.h"
#include "AnimBlendPlayParam.h"
#include "AnimBlendPlayParamList.h"
#include "ESeqAnimInstMode.h"
#include "LevelSeqAnimInstInf.h"
#include "VisualActorAnimInstanceBase.h"
#include "LevelSequenceCharaAnimInstance.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, NonTransient)
class GAMEBASESYSTEM_API ULevelSequenceCharaAnimInstance : public UVisualActorAnimInstanceBase, public ILevelSeqAnimInstInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimBlendPlayParamList MBlendPlayParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqAnimInstMode MSeqAnimMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* MOldAnimInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPhysicsEaseInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MCurrentPhysicsEaseInTime;
    
public:
    ULevelSequenceCharaAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartAnimation(const FAnimBlendPlayParam& InAnimBlendParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSeqAnimMode(ESeqAnimInstMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PauseAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupSequenceAnimInst(UAnimInstance* InOldAnimInst);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAnimationPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAnimBlendPlayParam GetActiveAnimParam() const;
    

    // Fix for true pure virtual functions not being implemented
};

