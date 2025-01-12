#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01GimmickTereltebaTowerLockBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickTereltebaTowerLockBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MReceiveInteractEventInfo;
    
public:
    AG01GimmickTereltebaTowerLockBase(const FObjectInitializer& ObjectInitializer);

};

