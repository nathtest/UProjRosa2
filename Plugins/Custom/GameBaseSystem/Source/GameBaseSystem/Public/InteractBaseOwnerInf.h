#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "InteractColliderTag.h"
#include "InteractBaseOwnerInf.generated.h"

class AActor;
class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractBaseOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IInteractBaseOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_InteractBase_OnEndOverlap(const FInteractColliderTag& InHitTag, UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_InteractBase_OnBeginOverlap(const FInteractColliderTag& InHitTag, UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent);
    
};

