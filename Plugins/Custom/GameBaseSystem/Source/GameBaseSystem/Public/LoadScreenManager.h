#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppUserWidgetOwnerInf -FallbackName=AppUserWidgetOwnerInf
#include "ELoadScreenType.h"
#include "EScreenTransitionType.h"
#include "EWidgetType.h"
#include "LoadScreenManagerInf.h"
#include "ManagerBase.h"
#include "ScreenTransitionManagerObserverInf.h"
#include "Templates/SubclassOf.h"
#include "AppUserWidgetOwnerInf.h"
#include "LoadScreenManager.generated.h"

class ALoadScreenInput;
class UAppUserWidgetDataObject;
class ULoadScreenWidget;
class UObject;
class UObserverSubjectComponent;
class UScreenTransitionManagerAccessor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ALoadScreenManager : public AManagerBase, public ILoadScreenManagerInf, public IAppUserWidgetOwnerInf, public IScreenTransitionManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetType MControlWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoadScreenType, TSoftClassPtr<ULoadScreenWidget>> MCreateWidgetSoftClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALoadScreenInput> MCreateInputClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenTransitionType DefaultScreenTransitionOutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshScreenTransitionOutTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoadScreenType, EScreenTransitionType> ScreenTransitionOutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadScreenWidget* MWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALoadScreenInput* MInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsReserveEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAutoEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* MObserverSubjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScreenTransitionManagerAccessor* MScreenTransitionManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCustomTaskCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsLoadingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> MDeactivateWaitObjects;
    
public:
    ALoadScreenManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLoadScreenType(ELoadScreenType InType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveMasterViewWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegistryDataObject(const UAppUserWidgetDataObject* InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    ELoadScreenType GetLoadScreenType();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckLastScreenTransition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddMasterViewWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
};

