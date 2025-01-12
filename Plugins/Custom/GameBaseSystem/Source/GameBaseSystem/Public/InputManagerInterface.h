#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputGlobalState.h"
#include "EPlatformType.h"
#include "InputStackData.h"
#include "InputManagerInterface.generated.h"

class AInputObjectBase;

UINTERFACE(Blueprintable)
class UInputManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IInputManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InputManager_RequestInputPause(AInputObjectBase* InInput);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InputManager_RequestInputAuthority(int32 InControllerIndex, AInputObjectBase* InInput);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InputManager_ReleaseInputPause(AInputObjectBase* InInput);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InputManager_ReleaseInputAuthority(AInputObjectBase* InInput);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InputManager_OnReleasedAnyKey(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InputManager_OnPressedAnyKey(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InputManager_IsPressingAnyKey(int32 InPlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPlatformType Inf_InputManager_GetLastInputPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InputManager_GetInputStackData(int32 InPlayerControllerIndex, bool& OutIsValid, FInputStackData& OutInputStackData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInputGlobalState Inf_InputManager_GetInputGlobalState() const;
    
};

