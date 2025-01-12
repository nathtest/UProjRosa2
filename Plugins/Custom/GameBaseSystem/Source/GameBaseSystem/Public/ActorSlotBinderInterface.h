#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ActorSlotBinderInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UActorSlotBinderInterface : public UInterface {
    GENERATED_BODY()
};

class IActorSlotBinderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_SlotBinder_GetSlotIndex();
    
};

