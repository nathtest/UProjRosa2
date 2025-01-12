#pragma once
#include "CoreMinimal.h"
#include "UiController.h"
#include "SingleUiController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASingleUiController : public AUiController {
    GENERATED_BODY()
public:
    ASingleUiController(const FObjectInitializer& ObjectInitializer);

};

