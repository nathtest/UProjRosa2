#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "LoadedAnimInstanceCallBackDelegate.h"
#include "LoadedAnimMontageCallBackDelegate.h"
#include "LoadedAnimSequenceCallBackDelegate.h"
#include "VisualActorLoaderBase.h"
#include "CharaVisualActorLoader.generated.h"

class UAnimMontage;
class UAnimSequence;
class UVisualActorAnimInstanceBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACharaVisualActorLoader : public AVisualActorLoaderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedAnimMontageCallBack MLoadedAnimationMontageCallBack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedAnimSequenceCallBack MLoadedAnimSequenceCallBack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedAnimInstanceCallBack MLoadedAnimInstanceCallBack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSetAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualActorAnimInstanceBase* MAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAnimSequence*> MAnimSequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSoftObjectPath> MAnimSequencePathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MAnimMontage;
    
public:
    ACharaVisualActorLoader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAnimSequence(FName InKey, UAnimSequence* InAnimSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimMontage(UAnimMontage* InAnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontage(FName InSlot, float InBlendInTime, float InBlendOutTime, float InPlayRate, int32 InLoopCount);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimSequenceSlot(FName InKey, FName InSlot, float InBlendInTime, float InBlendOutTime, float InPlayRate, int32 InLoopCount);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimSequence(FName InKey, bool InIsLoop);
    
    UFUNCTION(BlueprintCallable)
    bool LoadAnimSequence(TSoftClassPtr<UObject> InLoadClass, FName InKey);
    
    UFUNCTION(BlueprintCallable)
    bool LoadAnimMontage(TSoftClassPtr<UObject> InLoadClass);
    
    UFUNCTION(BlueprintCallable)
    bool LoadAnimInstance(TSoftClassPtr<UObject> InLoadClass, bool InIsSetAnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimSequence(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetAnimMontage();
    
};

