#pragma once
#include "CoreMinimal.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickWizardFort02ObserverInf.h"
#include "G01GimmickWizardFortPlate02Base.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickWizardFortPlate02Base : public AG01GimmickObjectBase, public IG01GimmickWizardFort02ObserverInf {
    GENERATED_BODY()
public:
    AG01GimmickWizardFortPlate02Base(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

