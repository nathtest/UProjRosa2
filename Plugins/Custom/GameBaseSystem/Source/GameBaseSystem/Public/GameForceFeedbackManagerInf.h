#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ForceFeedbackCommonParams.h"
#include "ForceFeedbackPlayDynamicParams.h"
#include "ForceFeedbackPlayParams.h"
#include "GameForceFeedbackManagerInf.generated.h"

UINTERFACE(Blueprintable)
class UGameForceFeedbackManagerInf : public UInterface {
    GENERATED_BODY()
};

class IGameForceFeedbackManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_UpdateDynamic(const FForceFeedbackPlayDynamicParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_StopDynamic(const FForceFeedbackCommonParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_Stop(const FForceFeedbackCommonParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_SetEnable(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_PlayDynamic(const FForceFeedbackPlayDynamicParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_Play(const FForceFeedbackPlayParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_IsEnable(bool& OutIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ForceFeedback_AllStop();
    
};

