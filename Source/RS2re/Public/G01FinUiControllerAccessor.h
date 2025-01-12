#pragma once
#include "CoreMinimal.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01FinUiControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FinUiControllerAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01FinUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestFin();
    
};

