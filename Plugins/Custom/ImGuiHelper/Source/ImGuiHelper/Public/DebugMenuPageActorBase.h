#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DebugMenuPageActorBase.generated.h"

UCLASS(Blueprintable)
class IMGUIHELPER_API ADebugMenuPageActorBase : public AActor {
    GENERATED_BODY()
public:
    ADebugMenuPageActorBase(const FObjectInitializer& ObjectInitializer);

};

