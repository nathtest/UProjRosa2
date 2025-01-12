#pragma once
#include "CoreMinimal.h"
#include "SequenceControllerUserInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceControllerUserInf -FallbackName=SequenceControllerUserInf
#include "G01SequenceControllerUserInf.generated.h"

UINTERFACE(MinimalAPI)
class UG01SequenceControllerUserInf : public USequenceControllerUserInf {
    GENERATED_BODY()
};

class IG01SequenceControllerUserInf : public ISequenceControllerUserInf {
    GENERATED_BODY()
public:
};

