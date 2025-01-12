#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ObserverDebugObjectInfo.h"
#include "ObserverRegisterObjects.h"
#include "Observer.generated.h"

class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UObserver : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FObserverRegisterObjects> interfaceList_;
    
public:
    UObserver();

    UFUNCTION(BlueprintCallable)
    void UnregisterInterface(UObject* InObject, UClass* InInterfaceType);
    
    UFUNCTION(BlueprintCallable)
    void Unregister(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInterface(UObject* InObject, UClass* InInterfaceType);
    
    UFUNCTION(BlueprintCallable)
    void Register(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void GetObserverObject(UClass* InInterfaceType, TArray<UObject*>& OutObjectArray);
    
    UFUNCTION(BlueprintCallable)
    void DebugGetAllObserverObject(TMap<UClass*, FObserverDebugObjectInfo>& OutInterfaceList);
    
};

