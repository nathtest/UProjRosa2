#pragma once
#include "CoreMinimal.h"
#include "EScreenTransitionType.h"
#include "GameViewWidget.h"
#include "ScreenTransitionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEBASESYSTEM_API UScreenTransitionWidget : public UGameViewWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenTransitionType MCurrentType;
    
public:
    UScreenTransitionWidget();

    UFUNCTION(BlueprintCallable)
    void SetScreenTransitionType(EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionReset(bool InIsOn);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionOut(FName InNotifyName, float InTime, EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionIn(EScreenTransitionType InType, FName InNotifyName, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnScreenTransitionReset(EScreenTransitionType InType, bool InIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnScreenTransitionOut(EScreenTransitionType InType, FName InNotifyName, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnScreenTransitionIn(EScreenTransitionType InType, FName InNotifyName, float InTime);
    
};

