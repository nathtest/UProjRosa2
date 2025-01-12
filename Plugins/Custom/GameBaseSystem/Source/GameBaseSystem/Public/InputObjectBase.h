#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EInputObjectPriorityGroup.h"
#include "EInputObjectState.h"
#include "EInputRegistResult.h"
#include "InputObjectBase.generated.h"

class UInputManagerAccessComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AInputObjectBase : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MUsePlayerControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MbAllowInputSharing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputObjectPriorityGroup MPriorityGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsMouseCursorInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputManagerAccessComponent* MInputManagerAccessor;
    
public:
    AInputObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SystemInputUpdateCursor(float InAxisX, float InAxisY, float InSpeed, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SystemInputTriggerMouseWheelAxis(float InSpeedDelta);
    
    UFUNCTION(BlueprintCallable)
    void SystemInputTriggerMouseRelease();
    
    UFUNCTION(BlueprintCallable)
    void SystemInputTriggerMousePress();
    
public:
    UFUNCTION(BlueprintCallable)
    void SettingMouseCursorInput(bool InFlag) const;
    
    UFUNCTION(BlueprintCallable)
    void RequestInputPause(EInputRegistResult& OutBranches);
    
    UFUNCTION(BlueprintCallable)
    void RequestInputAuthority(int32 InControllerIndex, EInputRegistResult& OutBranches);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseInputPause(EInputRegistResult& OutBranches);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseInputAuthority();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSecessionInputSharingObject(int32 InSharingObjNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJoinInputSharingObject(int32 InSharingObjNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputPause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationWillDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationHasReactivated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseCursorInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowInputSharing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInputAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsePlayerControllerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputObjectState GetInputObjectState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputObjectPriorityGroup GetInputObjectPriorityGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputObjectState GetInputObjectPrevState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableMouseCursorInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableMouseCursorInput();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeInputSharingSetting(bool InIsAllowInputSharing);
    
};

