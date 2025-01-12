#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableTextBox -FallbackName=EditableTextBox
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetTransform -FallbackName=WidgetTransform
#include "Components/EditableTextBox.h"
#include "AppEditableTextBoxSettings.h"
#include "VirtualKeyboardDismissResult.h"
#include "VirtualKeyboardShowParams.h"
#include "AppEditableTextBoxBase.generated.h"

class UVirtualKeyboardBase;

UCLASS(Abstract, Blueprintable)
class VIRTUALKEYBOARDHELPER_API UAppEditableTextBoxBase : public UEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppEditableTextBoxSettings WidgetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualKeyboardShowParams VirtualKeyboardParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTextOverAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinAdjustScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVirtualKeyboardBase* VirtualKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTextUpdating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsKeyboardCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InputText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWidgetTransform DefaultRenderTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D DefaultWidgetSize;
    
public:
    UAppEditableTextBoxBase();

    UFUNCTION(BlueprintCallable)
    void ShowVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(int32 InOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardCancel(bool InCancel);
    
    UFUNCTION(BlueprintCallable)
    void SetInputCharMax(int32 InCharMax);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOptions(int32 InOptions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVirtualKeyboardDismiss(const FVirtualKeyboardDismissResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLost();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboardCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInputText() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOptions(int32 InOptions);
    
};

