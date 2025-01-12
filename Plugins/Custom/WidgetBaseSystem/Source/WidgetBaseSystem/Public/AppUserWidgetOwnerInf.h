#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AppUserWidgetOwnerInf.generated.h"

class UAppUserWidgetDataObject;
class UWidgetAnimation;

UINTERFACE(Blueprintable, MinimalAPI)
class UAppUserWidgetOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IAppUserWidgetOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_RegistryDataObject(const UAppUserWidgetDataObject* InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_OnPointerExit(const FString& InNotifyName, int32 InObjectID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_OnPointerEnter(const FString& InNotifyName, int32 InObjectID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_OnMouseUp(const FString& InNotifyName, int32 InObjectID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_OnMouseDown(const FString& InNotifyName, int32 InObjectID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_OnHolding(const FString& InNotifyName, int32 InObjectID, float InHoldDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_AnimationStart(const UWidgetAnimation* InAnimation, FName InNotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AppUserWidget_AnimationFinish(const UWidgetAnimation* InAnimation, FName InNotifyName);
    
};

