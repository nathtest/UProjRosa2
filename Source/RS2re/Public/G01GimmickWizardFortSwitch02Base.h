#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01GimmickWizardFort02ObserverInf.h"
#include "G01GimmickWizardFortSwitch02Base.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickWizardFortSwitch02Base : public AG01GimmickObjectBase, public IG01GimmickWizardFort02ObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MReceiveInteractEventInfo;
    
public:
    AG01GimmickWizardFortSwitch02Base(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

