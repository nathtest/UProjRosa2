#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Clock_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UClock_StandardAISystem : public UObject {
    GENERATED_BODY()
public:
    UClock_StandardAISystem();

    UFUNCTION(BlueprintCallable)
    static void StartClock();
    
    UFUNCTION(BlueprintCallable)
    static float EndClock();
    
};

