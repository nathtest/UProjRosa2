#pragma once
#include "CoreMinimal.h"
#include "EUiControllerId.h"
#include "ManagerAccessor.h"
#include "UiManagerAccessor.generated.h"

class AUiController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UUiManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UUiManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AUiController* GetUIController(EUiControllerId InUIControllerID);
    
};

