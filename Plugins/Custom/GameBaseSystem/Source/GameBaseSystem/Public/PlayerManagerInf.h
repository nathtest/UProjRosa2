#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PlayerManagerInf.generated.h"

class AActor;
class APlayerStart;

UINTERFACE(Blueprintable, MinimalAPI)
class UPlayerManagerInf : public UInterface {
    GENERATED_BODY()
};

class IPlayerManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PlayerManager_UnregisterPlayerVisibility(AActor* InRegisterActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PlayerManager_TeleportToPlayerStartDirect(APlayerStart* InPlayerStart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PlayerManager_ResetPlayerPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PlayerManager_ResetPlayerCameraRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PlayerManager_RegisterPlayerVisibility(AActor* InRegisterActor, bool InIsVisible);
    
};

