#pragma once
#include "CoreMinimal.h"
#include "G01MsgUiControllerBase.h"
#include "G01MsgWindowParamArray.h"
#include "G01TextFindResult.h"
#include "G01MsgWindowDisp.generated.h"

class AActor;
class UG01MsgRootComponent;
class UG01TextFeedingComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01MsgWindowDisp : public AG01MsgUiControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01TextFeedingComponent* MTextFeedingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01TextFindResult> MDisplayTextInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MWindowUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MsgRootComponent* MMsgRootComponent;
    
public:
    AG01MsgWindowDisp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWindowPosition(AActor* InUser, UG01MsgRootComponent* InMsgRootComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateText(const FText& InSpeakerText, const FText& InContentText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartText();
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindow(AActor* InUser, const FG01MsgWindowParamArray& InParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupAddDynamic();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTextFeedUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnTextFeedStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnTextFeedCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayEnd();
    
    UFUNCTION(BlueprintCallable)
    bool NextText();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsMomentFeedSeconds();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompleteText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_CloseWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
};

