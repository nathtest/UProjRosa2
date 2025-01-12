#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01MsgSingleUiControllerUserInf.h"
#include "G01GimmickCheckPoint.generated.h"

class UG01MsgRootComponent;
class UG01MsgWindowComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickCheckPoint : public AG01GimmickObjectBase, public IG01MsgSingleUiControllerUserInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MCheckPointEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MCheckPointMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgRootComponent* MMessageRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgWindowComponent* MMsgWindowComponent;
    
public:
    AG01GimmickCheckPoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

