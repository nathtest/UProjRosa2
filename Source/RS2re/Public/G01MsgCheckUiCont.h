#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "G01MsgUiControllerBase.h"
#include "G01MsgWindowParamArray.h"
#include "G01MsgWindowParamByFlag.h"
#include "G01MsgWindowParamByQuestProgress.h"
#include "G01TextFindResult.h"
#include "G01MsgCheckUiCont.generated.h"

class UFlagSystemManagerAccessCompo;
class UG01TextFeedingComponent;
class UQuestManagerAccessComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01MsgCheckUiCont : public AG01MsgUiControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagSystemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UQuestManagerAccessComponent* MQuestManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01TextFeedingComponent* MTextFeedingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01TextFindResult> MDisplayTextInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> MTextJustify;
    
public:
    AG01MsgCheckUiCont(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateText(const FText& InContentText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartText();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShowWindowByQuestProgress(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByQuestProgress& InParam);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindowByFlag(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByFlag& InParam);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindow(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamArray& InParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnTextFeedUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnTextFeedStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnTextFeedCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    bool NextText();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsMomentFeedSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompleteText();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
};

