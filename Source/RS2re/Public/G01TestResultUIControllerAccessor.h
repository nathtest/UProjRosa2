#pragma once
#include "CoreMinimal.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01TestResultDataParam.h"
#include "G01TestResultUIControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01TestResultUIControllerAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01TestResultUIControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestExamPass(FG01TestResultDataParam DataParam);
    
    UFUNCTION(BlueprintCallable)
    bool RequestExamFailed(FG01TestResultDataParam DataParam);
    
};

