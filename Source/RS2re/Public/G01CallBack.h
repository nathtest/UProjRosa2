#pragma once
#include "CoreMinimal.h"
#include "SubSystems/GameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ExecutorKey.h"
#include "UG01CallBackDebugObjectInfo.h"
#include "G01CallBack.generated.h"

class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01CallBack : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UG01CallBack();

    UFUNCTION(BlueprintCallable)
    void UnregisterInterface(UObject* InObject, UClass* InExecutorType, UClass* InInterfaceType);
    
    UFUNCTION(BlueprintCallable)
    void Unregister(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInterface(UObject* InObject, UClass* InExecutorType, UClass* InInterfaceType);
    
    UFUNCTION(BlueprintCallable)
    void GetCallBackObject(UObject* InExecutorObject, UClass* InInterfaceType, TArray<UObject*>& OutObjectArray);
    
    //UFUNCTION(BlueprintCallable)
    //void DebugGetAllCallBackObject(TMap<FExecutorKey, FUG01CallBackDebugObjectInfo>& OutInterfaceList);
    
};

