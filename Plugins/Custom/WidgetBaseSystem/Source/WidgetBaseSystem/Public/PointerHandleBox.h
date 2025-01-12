#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "Components/Widget.h"
#include "PointerHandleBox.generated.h"

class UAppUserWidget;

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UPointerHandleBox : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreHoldTriggerDelay;
    
public:
    UPointerHandleBox();

    UFUNCTION(BlueprintCallable)
    void SetObjectID(int32 InObjectID);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyName(const FString& InNotifyName);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepTracking(bool InKeepTracking);
    
    UFUNCTION(BlueprintCallable)
    void SetIsClickable(bool InIsClickable);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreHoldTriggerDelay(bool InIgnoreHoldTriggerDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetControlWidget(UAppUserWidget* InControlWidget);
    
    UFUNCTION(BlueprintCallable)
    bool IsPressed();
    
    UFUNCTION(BlueprintCallable)
    bool IsFastPathVisible();
    
    UFUNCTION(BlueprintCallable)
    int32 GetObjectID();
    
    UFUNCTION(BlueprintCallable)
    FString GetNotifyName();
    
    UFUNCTION(BlueprintCallable)
    bool GetKeepTracking();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsClickable();
    
    UFUNCTION(BlueprintCallable)
    bool GetIgnoreHoldTriggerDelay();
    
    UFUNCTION(BlueprintCallable)
    UAppUserWidget* GetControlWidget();
    
};

