#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "G01BattleValueUIControllerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleValueUIControllerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01BattleValueUIControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverHP(int32 InValue, AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverBP(int32 InValue, AActor* InTarget);
    
};

