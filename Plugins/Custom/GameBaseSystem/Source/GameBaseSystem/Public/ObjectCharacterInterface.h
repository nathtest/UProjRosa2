#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ObjectCharacterInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UObjectCharacterInterface : public UInterface {
    GENERATED_BODY()
};

class IObjectCharacterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ObjectCharacter_UpdateIconPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ObjectCharacter_NotifyEnableGravity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ObjectCharacter_NotifyDisableGravity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ObjectCharacter_GetCustomVelocity(FVector& OutVector, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ObjectCharacter_GetCustomMaxSpeed(float& OutMaxSpeed, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ObjectCharacter_EnableTick(bool InEnable);
    
};

