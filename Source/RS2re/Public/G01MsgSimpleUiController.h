#pragma once
#include "CoreMinimal.h"
#include "G01MsgSimpleParamInfo.h"
#include "G01MsgUiControllerBase.h"
#include "G01OnChangeMsgSimpleStateDelegate.h"
#include "G01MsgSimpleUiController.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API AG01MsgSimpleUiController : public AG01MsgUiControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MMaxCreateNum;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnChangeMsgSimpleState MOnRegisterSimpleWindow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnChangeMsgSimpleState MOnUnregisterSimpleWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01MsgSimpleParamInfo> MParamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsInBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsInSequence;
    
public:
    AG01MsgSimpleUiController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSimpleWindow(int32 InWidgetIndex, const FText& InSpeakerText, const FText& InContentText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterSimpleWindow(AActor* InUser, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxCreateNum(int32 InMaxCreateNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterSimpleWindow(AActor* InUser, int32 InIndex);
    
};

