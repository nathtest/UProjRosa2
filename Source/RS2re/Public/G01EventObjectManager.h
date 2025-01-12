#pragma once
#include "CoreMinimal.h"
#include "EventObjectManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EventObjectManager -FallbackName=EventObjectManager
#include "G01BattleManagerObserverInf.h"
#include "G01EventObjectManagerInterface.h"
#include "G01FieldPlayerManagerInf.h"
#include "G01GimmickStoneShrineObserverInf.h"
#include "G01EventObjectManager.generated.h"

class UG01RoomManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01EventObjectManager : public AEventObjectManager, public IG01EventObjectManagerInterface, public IG01BattleManagerObserverInf, public IG01GimmickStoneShrineObserverInf, public IG01FieldPlayerManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* RoomManagerAccessor;
    
public:
    AG01EventObjectManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

