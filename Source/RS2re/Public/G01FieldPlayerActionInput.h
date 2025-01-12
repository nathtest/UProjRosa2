#pragma once
#include "CoreMinimal.h"
#include "InputObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputObjectBase -FallbackName=InputObjectBase
#include "G01FieldPlayerActionInput.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FieldPlayerActionInput : public AInputObjectBase {
    GENERATED_BODY()
public:
    AG01FieldPlayerActionInput(const FObjectInitializer& ObjectInitializer);

};

