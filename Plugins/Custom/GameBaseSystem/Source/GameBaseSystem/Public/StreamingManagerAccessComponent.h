#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "StreamingManagerAccessComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UStreamingManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UStreamingManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAllStreaming();
    
    UFUNCTION(BlueprintCallable)
    void StartAllStreaming();
    
};

