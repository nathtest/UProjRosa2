#pragma once
#include "CoreMinimal.h"
#include "InteractBaseOwnerInf.h"
#include "InteractColliderTag.h"
#include "InteractReceiverOwnerInf.generated.h"

class UInteractReceiverComponent;

UINTERFACE(MinimalAPI)
class UInteractReceiverOwnerInf : public UInteractBaseOwnerInf {
    GENERATED_BODY()
};

class IInteractReceiverOwnerInf : public IInteractBaseOwnerInf {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Owner_InteractReceiver_OnReceiveDeactivate(UInteractReceiverComponent* InReceive, const FInteractColliderTag& InHitTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Owner_InteractReceiver_OnReceiveCheckExecutable(UInteractReceiverComponent* InReceive, const FInteractColliderTag& InHitTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Owner_InteractReceiver_OnReceiveActivate(UInteractReceiverComponent* InReceive, const FInteractColliderTag& InHitTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Owner_InteractReceiver_OnReceiveActionExecute(UInteractReceiverComponent* InReceive, const FInteractColliderTag& InHitTag);
    
};

