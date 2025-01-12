#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppUserWidgetOwnerInf -FallbackName=AppUserWidgetOwnerInf
#include "AppActor.h"
#include "EUiControllerAutoType.h"
#include "EUiControllerId.h"
#include "EUiControllerType.h"
#include "EUiNotify.h"
#include "EWidgetType.h"
#include "OnUpdateUiObjectStateDelegate.h"
#include "UiControllerInf.h"
#include "AppUserWidgetOwnerInf.h"
#include "UiController.generated.h"

class UAppUserWidgetDataObject;
class UGameViewWidget;
class UWidgetManagerAccessor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AUiController : public AAppActor, public IUiControllerInf, public IAppUserWidgetOwnerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUiControllerType MUiControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUiControllerId MUiControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUiControllerAutoType MAutoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetType MMainWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUiNotify> MNotifyIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameViewWidget* MMainWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWidgetType> MCreateTriggerWidgetTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetManagerAccessor* MWidgetManagerAccessor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateUiObjectState MOnActivateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateUiObjectState MOnDeactivateDelegate;
    
public:
    AUiController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupProcess();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveMasterViewWidget(UGameViewWidget* InWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegistryDataObject(const UAppUserWidgetDataObject* InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUiControllerId GetUiControllerId() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EUiNotify> GetNotifyList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameViewWidget* GetMainWidget() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<UGameViewWidget*> FindGameViewWidgetList(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable)
    UGameViewWidget* FindGameViewWidget(EWidgetType InWidgetType);
    
public:
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void AddMasterViewWidget(UGameViewWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
};

