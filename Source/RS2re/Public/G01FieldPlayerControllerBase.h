#pragma once
#include "CoreMinimal.h"
#include "AppPlayerController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPlayerController -FallbackName=AppPlayerController
#include "G01FieldPlayerControllerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FieldPlayerControllerBase : public AAppPlayerController {
    GENERATED_BODY()
public:
    AG01FieldPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

};

