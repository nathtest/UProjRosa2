#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "VisualActorOwnerInf.generated.h"

class AActor;
class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UVisualActorOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IVisualActorOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* Inf_VisualActorOwner_GetVisualActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* Inf_VisualActorOwner_GetOverrideSkeletalMeshComponent();
    
};

