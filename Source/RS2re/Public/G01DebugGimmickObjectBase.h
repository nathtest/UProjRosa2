#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InteractHitCreateEventInfo -FallbackName=InteractHitCreateEventInfo
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01DebugGimmickObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugGimmickObjectBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo EventInfo;
    
public:
    AG01DebugGimmickObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveHitCreateEvent(const FInteractHitCreateEventInfo& InHitCreateEventInfo, FInteractHitCreateEventInfo& OutEventInfo);
    
};

