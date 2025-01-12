#pragma once
#include "CoreMinimal.h"
#include "AppControlRig.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppControlRig -FallbackName=AppControlRig
#include "G01ControlRig.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01ControlRig : public UAppControlRig {
    GENERATED_BODY()
public:
    UG01ControlRig();

};

