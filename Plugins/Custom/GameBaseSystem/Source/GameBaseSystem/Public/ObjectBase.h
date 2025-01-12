#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "InteractBaseObserverInf.h"
#include "InteractReceiverOwnerInf.h"
#include "ObjectBase.generated.h"

class AActor;
class UAttachPositionComponent;
class UInteractReceiverHelperComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AObjectBase : public AAppActor, public IInteractReceiverOwnerInf, public IInteractBaseObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttachPositionComponent* AttachPositionsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractReceiverHelperComponent* MReceiverHelper;
    
public:
    AObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void InitializeInteract();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetInteractObject();
    

    // Fix for true pure virtual functions not being implemented
};

