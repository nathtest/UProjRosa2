#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackCommonParams.h"
#include "ForceFeedbackPlayDynamicParams.h"
#include "ForceFeedbackPlayParams.h"
#include "ManagerAccessor.h"
#include "GameForceFeedbackManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UGameForceFeedbackManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UGameForceFeedbackManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDynamic(const FForceFeedbackPlayDynamicParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void StopDynamic(const FForceFeedbackCommonParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void Stop(const FForceFeedbackCommonParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void PlayDynamic(const FForceFeedbackPlayDynamicParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void Play(const FForceFeedbackPlayParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void AllStop();
    
};

