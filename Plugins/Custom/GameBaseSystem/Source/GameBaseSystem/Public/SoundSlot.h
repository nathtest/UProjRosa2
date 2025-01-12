#pragma once
#include "CoreMinimal.h"
#include "SoundSlot.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FSoundSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MAudioComponent;
    
    GAMEBASESYSTEM_API FSoundSlot();
};

