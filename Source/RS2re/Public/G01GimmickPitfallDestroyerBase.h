#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01GimmickPitfallObserverInf.h"
#include "G01GimmickPitfallDestroyerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickPitfallDestroyerBase : public AG01GimmickObjectBase, public IG01GimmickPitfallObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MReceiveInteractEventInfo;
    
public:
    AG01GimmickPitfallDestroyerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

