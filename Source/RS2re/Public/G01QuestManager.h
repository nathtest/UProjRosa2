#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "QuestCategory.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestCategory -FallbackName=QuestCategory
#include "QuestManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestManager -FallbackName=QuestManager
#include "G01AbilityManagerObserverInf.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BlackSmithMenuUiControllerObserverInf.h"
#include "G01ClearAreaUiControllerObserverInf.h"
#include "G01ExpGrowthObserverInf.h"
#include "G01FieldEnemyGeneratorManagerUserInf.h"
#include "G01GamePlayDataManagerObserverInf.h"
#include "G01InventorManagerObserverInf.h"
#include "G01PartyManagerObserverInf.h"
#include "G01PeriodManagerObserverInf.h"
#include "G01QuestManagerInterface.h"
#include "G01QuestTargetReserve.h"
#include "G01ThroneManagerObserverInf.h"
#include "G01QuestManager.generated.h"

class UDataTable;
class UG01DestinationManagerAccessor;
class UG01GameSystemDataManagerAccessor;
class UG01PartyManagerAccessor;
class UG01RoomManagerAccessor;
class UG01SaveDataManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01QuestManager : public AQuestManager, public IG01QuestManagerInterface, public IG01BattleManagerObserverInf, public IG01FieldEnemyGeneratorManagerUserInf, public IG01PeriodManagerObserverInf, public IG01BlackSmithMenuUiControllerObserverInf, public IG01InventorManagerObserverInf, public IG01ClearAreaUiControllerObserverInf, public IG01ExpGrowthObserverInf, public IG01PartyManagerObserverInf, public IG01AbilityManagerObserverInf, public IG01ThroneManagerObserverInf, public IG01GamePlayDataManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01DestinationManagerAccessor* MDestinationAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01SaveDataManagerAccessor* SaveDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* RoomManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataManagerAccessor* GameSystemDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestCategory> AutoTargetCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BrutusQuestSettingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableAllQuestDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestCategory> DestinationTargetCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct DevelopmentNotifyBoostFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevelopmentNotifyBoostCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam DevelopmentFlagAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01QuestTargetReserve TargetReserve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRequestAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWaitExecuteAutoSave;
    
public:
    AG01QuestManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

