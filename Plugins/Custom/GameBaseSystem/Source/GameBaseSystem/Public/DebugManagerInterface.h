#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EDebugSystemId.h"
#include "DebugManagerInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UDebugManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IDebugManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_DebugManager_SetVisibilityDebugSystemID(EDebugSystemId InDebugSystemId, bool InVisibility, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_DebugManager_SetVisibilityAll(bool InVisibility, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_DebugManager_IsActiveDebugSystem(EDebugSystemId InDebugSystemId, bool& ReIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_DebugManager_GetVisibilityDebugSystemID(EDebugSystemId InDebugSystemId, bool& ReVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_DebugManager_GetDebugSystem(EDebugSystemId InDebugSystemId, AActor*& ReDebugSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_DebugManager_EnableDebugSystem(EDebugSystemId InDebugSystemId, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_DebugManager_DisableDebugSystem(EDebugSystemId InDebugSystemId, bool& ReSuccess);
    
};

