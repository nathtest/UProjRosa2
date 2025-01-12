#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01CallBackExecutorComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01CallBackExecutorComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01CallBackExecutorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCallBackObject(UObject* InExecutorObject, UClass* InInterfaceType, TArray<UObject*>& OutObjectArray);
    
};

