#pragma once
#include "CoreMinimal.h"
#include "InputManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputManagerObserverInf -FallbackName=InputManagerObserverInf
#include "UiManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiManager -FallbackName=UiManager
#include "G01BattleManagerObserverInf.h"
#include "G01BlackSmithMenuUiControllerObserverInf.h"
#include "G01BtCommandUiContUserInf.h"
#include "G01ClearAreaTelopUiControllerObserverInf.h"
#include "G01DestinationUserInf.h"
#include "G01EmperorChoiceUiControllerObserverInf.h"
#include "G01FieldEnemyGeneratorManagerUserInf.h"
#include "G01FieldMapUiControllerInf.h"
#include "G01FieldPlayerManagerObserverInf.h"
#include "G01GimmickDropItemObserverInf.h"
#include "G01GimmickInteractObserverInf.h"
#include "G01InteractObjectIconControlInf.h"
#include "G01MainMenuUiControllerObserverInf.h"
#include "G01MsgSingleUiControllerUserInf.h"
#include "G01PeriodJumpUiControllerObserverInf.h"
#include "G01RoomManagerNotifyInterface.h"
#include "G01ShopUiControllerObserverInf.h"
#include "G01UiManagerInf.h"
#include "G01WorldMapUiControllerInf.h"
#include "G01UiManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01UiManager : public AUiManager, public IInputManagerObserverInf, public IG01UiManagerInf, public IG01BattleManagerObserverInf, public IG01RoomManagerNotifyInterface, public IG01MsgSingleUiControllerUserInf, public IG01BtCommandUiContUserInf, public IG01InteractObjectIconControlInf, public IG01MainMenuUiControllerObserverInf, public IG01WorldMapUiControllerInf, public IG01FieldMapUiControllerInf, public IG01DestinationUserInf, public IG01FieldEnemyGeneratorManagerUserInf, public IG01FieldPlayerManagerObserverInf, public IG01GimmickDropItemObserverInf, public IG01GimmickInteractObserverInf, public IG01EmperorChoiceUiControllerObserverInf, public IG01ShopUiControllerObserverInf, public IG01BlackSmithMenuUiControllerObserverInf, public IG01PeriodJumpUiControllerObserverInf, public IG01ClearAreaTelopUiControllerObserverInf {
    GENERATED_BODY()
public:
    AG01UiManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

