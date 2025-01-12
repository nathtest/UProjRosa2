#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "VFXPlayerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AVFXPlayerBase : public AAppActor {
    GENERATED_BODY()
public:
    AVFXPlayerBase(const FObjectInitializer& ObjectInitializer);

};

