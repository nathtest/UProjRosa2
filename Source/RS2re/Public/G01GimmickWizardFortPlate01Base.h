#pragma once
#include "CoreMinimal.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickWizardFort01ObserverInf.h"
#include "G01GimmickWizardFortPlate01Base.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickWizardFortPlate01Base : public AG01GimmickObjectBase, public IG01GimmickWizardFort01ObserverInf {
    GENERATED_BODY()
public:
    AG01GimmickWizardFortPlate01Base(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

