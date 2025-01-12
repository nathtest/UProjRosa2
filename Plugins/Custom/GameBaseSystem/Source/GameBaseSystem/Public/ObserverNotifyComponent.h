#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "ObserverNotifyComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UObserverNotifyComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UObserverNotifyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetObserverObject(UClass* InInterfaceType, TArray<UObject*>& OutObjectArray);
    
};

