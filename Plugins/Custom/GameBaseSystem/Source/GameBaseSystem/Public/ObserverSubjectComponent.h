#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "ObserverSubjectComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UObserverSubjectComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UObserverSubjectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterInterface(UObject* InObject, UClass* InInterfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unregister(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterInterface(UObject* InObject, UClass* InInterfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Register(UObject* InObject);
    
};

