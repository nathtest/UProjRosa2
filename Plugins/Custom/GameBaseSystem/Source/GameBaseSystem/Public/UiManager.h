#pragma once
#include "CoreMinimal.h"
#include "EUiControllerId.h"
#include "EUiNotify.h"
#include "GeneratorManagerObserverInf.h"
#include "LevelMoveObserverInf.h"
#include "ManagerBase.h"
#include "QuestManagerObserverInf.h"
#include "ScreenTransitionManagerObserverInf.h"
#include "SequenceManagerObserverInf.h"
#include "UiManagerInf.h"
#include "UiManager.generated.h"

class AUiController;
class UDataTable;
class UWidgetManagerAccessor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AUiManager : public AManagerBase, public IUiManagerInf, public IQuestManagerObserverInf, public ISequenceManagerObserverInf, public IScreenTransitionManagerObserverInf, public IGeneratorManagerObserverInf, public ILevelMoveObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MWidgetCreateDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MControllerCreateDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUiControllerId, AUiController*> MUiControllerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AUiController*> MActiveUiControllerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetManagerAccessor* MWidgetManagerAccessor;
    
public:
    AUiManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupControllerCreateData();
    
public:
    UFUNCTION(BlueprintCallable)
    AUiController* GetUIController(EUiControllerId InID);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AUiController*> GetNotifyActiveUiController(EUiNotify InNotify);
    

    // Fix for true pure virtual functions not being implemented
};

