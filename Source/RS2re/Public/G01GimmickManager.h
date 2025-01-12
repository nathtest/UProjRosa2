#pragma once
#include "CoreMinimal.h"
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "GimmickManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickManagerBase -FallbackName=GimmickManagerBase
#include "ScreenTransitionManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ScreenTransitionManagerObserverInf -FallbackName=ScreenTransitionManagerObserverInf
#include "SequenceManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceManagerObserverInf -FallbackName=SequenceManagerObserverInf
#include "SQEXSeadHandleBP.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSeadHandleBP -FallbackName=SQEXSeadHandleBP
#include "G01BattleManagerObserverInf.h"
#include "G01FieldMapUiControllerInf.h"
#include "G01GimmickManagerInterface.h"
#include "G01MainMenuUiControllerObserverInf.h"
#include "G01RoomManagerNotifyInterface.h"
#include "G01TreasureBoxInfoTableRow.h"
#include "G01WorldMapUiControllerInf.h"
#include "G01GimmickManager.generated.h"

class UDataTable;
class UG01RoomManagerAccessor;
class UG01SequenceManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickManager : public AGimmickManagerBase, public IG01GimmickManagerInterface, public IScreenTransitionManagerObserverInf, public IG01BattleManagerObserverInf, public IG01RoomManagerNotifyInterface, public IG01FieldMapUiControllerInf, public IG01WorldMapUiControllerInf, public IG01MainMenuUiControllerObserverInf, public ISequenceManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* MRoomManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01SequenceManagerAccessor* MSequenceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TreasureBoxInfoTable;
    
public:
    AG01GimmickManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterDoorOpenSoundHandle(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LockInput(bool InIsLock);
    
    UFUNCTION(BlueprintCallable)
    void GetTreasureBoxInfo(const FDropItemTableID& InDropItemID, FG01TreasureBoxInfoTableRow& OutTreasureBoxInfo);
    

    // Fix for true pure virtual functions not being implemented
};

