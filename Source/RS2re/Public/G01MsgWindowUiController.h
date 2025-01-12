#pragma once
#include "CoreMinimal.h"
#include "G01MsgUiControllerBase.h"
#include "G01MsgWindowParamArray.h"
#include "G01MsgWindowParamByFlag.h"
#include "G01MsgWindowParamByQuestProgress.h"
#include "OnDisplayEndMsgStateDelegate.h"
#include "Templates/SubclassOf.h"
#include "G01MsgWindowUiController.generated.h"

class AActor;
class AG01MsgWindowInputObject;
class UFlagSystemManagerAccessCompo;
class UQuestManagerAccessComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01MsgWindowUiController : public AG01MsgUiControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagSystemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestManagerAccessComponent* MQuestManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01MsgWindowInputObject> MMessageWindowInputClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01MsgWindowInputObject* MMessageWindowInputObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndMsgState MOnDisplayEndDelegate;
    
public:
    AG01MsgWindowUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowWindowByQuestProgress(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByQuestProgress& InParam, bool InIsAutoClose);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindowByFlag(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByFlag& InParam, bool InIsAutoClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShowWindow(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamArray& InParam, bool InIsAutoClose);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextText();
    
    UFUNCTION(BlueprintCallable)
    void DisplayEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_CloseWindow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
};

