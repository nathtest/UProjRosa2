#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01GimmickWizardFort01ObserverInf.h"
#include "G01GimmickWizardFortSwitch01Base.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickWizardFortSwitch01Base : public AG01GimmickObjectBase, public IG01GimmickWizardFort01ObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MReceiveInteractEventInfo;
    
public:
    AG01GimmickWizardFortSwitch01Base(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

