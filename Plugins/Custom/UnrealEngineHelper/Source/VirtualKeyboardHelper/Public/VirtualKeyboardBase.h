#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EVirtualKeyboardOptionMask.h"
#include "OnVirtualKeyboardDismissDelegate.h"
#include "VirtualKeyboardDismissResult.h"
#include "VirtualKeyboardShowParams.h"
#include "VirtualKeyboardBase.generated.h"

UCLASS(Abstract, Blueprintable)
class VIRTUALKEYBOARDHELPER_API UVirtualKeyboardBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVirtualKeyboardDismissResult ResultCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVirtualKeyboardShowParams ShowParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnVirtualKeyboardDismiss Callback;
    
public:
    UVirtualKeyboardBase();

    UFUNCTION(BlueprintCallable)
    bool ShowKeyboard(const FVirtualKeyboardShowParams& InParams, const FOnVirtualKeyboardDismiss& InCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVirtualKeyboardShowParams GetShowParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVirtualKeyboardOptionMask GetOptions() const;
    
};

