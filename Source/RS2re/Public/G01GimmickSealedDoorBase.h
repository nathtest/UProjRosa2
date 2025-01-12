#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickDoorBase.h"
#include "G01MsgSingleUiControllerUserInf.h"
#include "G01GimmickSealedDoorBase.generated.h"

class UG01MsgRootComponent;
class UG01MsgWindowComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickSealedDoorBase : public AG01GimmickDoorBase, public IG01MsgSingleUiControllerUserInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MSimpleDoorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgRootComponent* MMessageRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgWindowComponent* MMsgWindowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MInteractMessage;
    
public:
    AG01GimmickSealedDoorBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

