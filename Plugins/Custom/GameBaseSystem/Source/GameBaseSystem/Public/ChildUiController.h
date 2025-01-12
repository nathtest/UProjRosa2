#pragma once
#include "CoreMinimal.h"
#include "UiController.h"
#include "ChildUiController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AChildUiController : public AUiController {
    GENERATED_BODY()
public:
    AChildUiController(const FObjectInitializer& ObjectInitializer);

};

