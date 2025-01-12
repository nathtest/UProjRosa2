#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EUMGSequencePlayMode -FallbackName=EUMGSequencePlayMode
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "AppUserWidgetPointerHandleListInfo.h"
#include "AppUserWidget.generated.h"

class UAppUserWidgetDataObject;
class UObject;
class UPointerHandleBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WIDGETBASESYSTEM_API UAppUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsEnableTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAppUserWidgetDataObject> MDataObjectSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAppUserWidgetPointerHandleListInfo> MChildrenPointerHandleBoxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UWidgetAnimation*, FName> MAnimationNotifyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* MControlObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppUserWidgetDataObject* MDataObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPointerHandleBox*> MRegisterPointerHandleBoxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointerHandleBox* MCurrentHoverPointerHandleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMouseHoldingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMouseHoldingIntervalDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPointerEnterTriggerTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPausing;
    
public:
    UAppUserWidget();

    UFUNCTION(BlueprintCallable)
    void UnregisterPointerHandleBox(UPointerHandleBox* InPointerHandleBox);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetControlObject(UObject* InControlObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ResistAnimationNotify(UWidgetAnimation* InAnimation, FName InNotifyName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPointerHandleBox(UPointerHandleBox* InPointerHandleBox);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PointerHandleTick(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlaySwitchAnimation(UWidgetAnimation* InAnimation, int32 InAnimationIndex, float InIntervalTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnRegistryDataObject(UAppUserWidgetDataObject* InDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPause();
    
public:
    UFUNCTION(BlueprintCallable)
    bool OnMousePointerExit(UPointerHandleBox* InPointerHandleBox);
    
    UFUNCTION(BlueprintCallable)
    bool OnMousePointerEnter(UPointerHandleBox* InPointerHandleBox, const FVector2D& InCursorDelta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataUpdate(FName InNotifyName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialization();
    
    UFUNCTION(BlueprintCallable)
    void GetPointerHandleBoxByNotifyName(const FString& InNotifyName, TArray<UPointerHandleBox*>& RePointerHandleBoxList);
    
    UFUNCTION(BlueprintCallable)
    UAppUserWidgetDataObject* GetDataObject();
    
    UFUNCTION(BlueprintCallable)
    UObject* GetControlObject();
    
    UFUNCTION(BlueprintCallable)
    void GetAllPointerHandleBox(TArray<UPointerHandleBox*>& RePointerHandleBoxList);
    
    UFUNCTION(BlueprintCallable)
    void ForceTickActionsAndAnimation(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* FindAnimation(FName InAnimName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelegateOnDataUpdate(FName InNotifyName);
    
    UFUNCTION(BlueprintCallable)
    UAppUserWidgetDataObject* CreateDataObject();
    
public:
    UFUNCTION(BlueprintCallable)
    void Cmd_StopAnimation(FName InNotifyName, bool& ReIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Cmd_PlaySwitchAnimation(UWidgetAnimation* InAnimation, int32 InAnimationIndex, float InIntervalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Cmd_PlayResetAnimation(UWidgetAnimation* InAnimation, float InStartAtTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Cmd_PlayFlipFlopAnimation(FName InNotifyName, UWidgetAnimation* InAnimation, int32 InNumberOfLoops, bool InIsPlayForward, float InPlaybackSpeed, bool InIsRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Cmd_PlayAnimation(FName InNotifyName, UWidgetAnimation* InAnimation, float InStartAtTime, int32 InNumberOfLoops, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode, float InPlaybackSpeed, bool InIsRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_IsPlayingAnimation(FName InNotifyName, bool& ReIsPlaying) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Cmd_FindAnimations(FName InNotifyName, TArray<UWidgetAnimation*>& ReAnims, bool InIsSearchAll) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void AnimationAction(FName InFunctionName, FName InNotifyName);
    
};

