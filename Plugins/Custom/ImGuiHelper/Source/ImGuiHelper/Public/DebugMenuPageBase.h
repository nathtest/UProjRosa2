#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DebugMenuPageBase.generated.h"

UCLASS(Blueprintable)
class IMGUIHELPER_API UDebugMenuPageBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTickableWhenPaused;
    
public:
    UDebugMenuPageBase();

    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float InDeltaTime);
    
};

