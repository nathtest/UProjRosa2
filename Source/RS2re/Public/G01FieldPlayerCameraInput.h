#pragma once
#include "CoreMinimal.h"
#include "InputObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputObjectBase -FallbackName=InputObjectBase
#include "G01FieldPlayerCameraInput.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FieldPlayerCameraInput : public AInputObjectBase {
    GENERATED_BODY()
public:
    AG01FieldPlayerCameraInput(const FObjectInitializer& ObjectInitializer);

};

