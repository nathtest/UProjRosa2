#pragma once
#include "CoreMinimal.h"
#include "InputObjectBase.h"
#include "ScreenTransitionInput.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AScreenTransitionInput : public AInputObjectBase {
    GENERATED_BODY()
public:
    AScreenTransitionInput(const FObjectInitializer& ObjectInitializer);

};

