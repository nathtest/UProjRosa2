#pragma once
#include "CoreMinimal.h"
#include "InputObjectBase.h"
#include "LoadScreenInput.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ALoadScreenInput : public AInputObjectBase {
    GENERATED_BODY()
public:
    ALoadScreenInput(const FObjectInitializer& ObjectInitializer);

};

