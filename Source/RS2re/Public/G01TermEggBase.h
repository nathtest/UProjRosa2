#pragma once
#include "CoreMinimal.h"
#include "G01ChangeEnemyAIStateAreaBase.h"
#include "G01TermEggBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01TermEggBase : public AG01ChangeEnemyAIStateAreaBase {
    GENERATED_BODY()
public:
    AG01TermEggBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayHatchingAnim();
    
};

