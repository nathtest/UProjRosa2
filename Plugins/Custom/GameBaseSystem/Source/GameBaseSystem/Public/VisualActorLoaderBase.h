#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "GeneratedVisualActorCallBackDelegate.h"
#include "LoadedVisualActorCallBackDelegate.h"
#include "VisualActorOwnerInf.h"
#include "VisualActorLoaderBase.generated.h"

class AVisualActor;
class UAnimInstance;
class ULoadControlActorComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AVisualActorLoaderBase : public AAppActor, public IVisualActorOwnerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVisualActor* MVisualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULoadControlActorComponent> MLoadController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* WaitRequestPlayAnimationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MGeneratedVisibility;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedVisualActorCallBack MGeneratedVisualActorCallBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedVisualActorCallBack MLoadedVisualActorCallBack;
    
    AVisualActorLoaderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisualActor(AVisualActor* InVisualActor);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratedVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    bool LoadVisualActorGenerate(TSoftClassPtr<AVisualActor> InLoadClass);
    
    UFUNCTION(BlueprintCallable)
    bool LoadVisualActor(TSoftClassPtr<AVisualActor> InLoadClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVisualActor* GetVisualActor() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteVisualActor();
    
    UFUNCTION(BlueprintCallable)
    void CancelLoad();
    

    // Fix for true pure virtual functions not being implemented
};

