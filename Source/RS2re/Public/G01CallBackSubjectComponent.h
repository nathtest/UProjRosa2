#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01CallBackSubjectComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01CallBackSubjectComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01CallBackSubjectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterInterface(UObject* InObject, const TSoftClassPtr<UObject>& InExecutorType, UClass* InInterfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unregister(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterInterface(UObject* InObject, const TSoftClassPtr<UObject>& InExecutorType, UClass* InInterfaceType);
    
};

