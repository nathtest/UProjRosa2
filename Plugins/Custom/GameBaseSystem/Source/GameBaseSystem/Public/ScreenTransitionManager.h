#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppUserWidgetOwnerInf -FallbackName=AppUserWidgetOwnerInf
#include "EScreenTransitionType.h"
#include "EWidgetType.h"
#include "ManagerBase.h"
#include "ScreenTransitionManagerInf.h"
#include "ScreenTransitionOutCache.h"
#include "AppUserWidgetOwnerInf.h"
#include "Templates/SubclassOf.h"
#include "ScreenTransitionManager.generated.h"

class AActor;
class AScreenTransitionInput;
class UGameLevelManagerAccesser;
class ULoadScreenManagerAccessor;
class UScreenTransitionWidget;
class USequencerManagerAccessCompo;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AScreenTransitionManager : public AManagerBase, public IScreenTransitionManagerInf, public IAppUserWidgetOwnerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetType MControlWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScreenTransitionWidget* MWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScreenTransitionWidget> MCreateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScreenTransitionInput* MInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AScreenTransitionInput> MCreateInputClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsHideScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenTransitionOutCache OutParamCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MLockOblects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadScreenManagerAccessor* MLoadScreenManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USequencerManagerAccessCompo* MSequenceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameLevelManagerAccesser* MGameLevelManagerAccesser;
    
public:
    AScreenTransitionManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetScreenTransitionType(EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionReset(bool InIsOn);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionOut(float InTime, EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionIn(EScreenTransitionType InType, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMasterViewWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExecutableTransitionOut() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideScreen();
    
public:
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddMasterViewWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
};

