#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "G01BattleStatusUiControllerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleStatusUiControllerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01BattleStatusUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverHP(int32 InValue, AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverBP(int32 InValue, AActor* InTarget);
    
};

