#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickAlenepShrineObserverInf.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickAlenepShrineDeviceBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickAlenepShrineDeviceBase : public AG01GimmickObjectBase, public IG01GimmickAlenepShrineObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MReceiveInteractEventInfo;
    
public:
    AG01GimmickAlenepShrineDeviceBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

