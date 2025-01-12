#pragma once
#include "CoreMinimal.h"
#include "AppUserWidget.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppUserWidget -FallbackName=AppUserWidget
#include "G01ChronologyEventImageWidgetBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01ChronologyEventImageWidgetBase : public UAppUserWidget {
    GENERATED_BODY()
public:
    UG01ChronologyEventImageWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchLeftRight(bool IsCharacterLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEventTexture(const TSoftObjectPtr<UTexture2D>& InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutChangeAnimation(FName InNotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutAnimation(FName InNotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InChangeAnimation(FName InNotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InAnimation(FName InNotifyName);
    
};

