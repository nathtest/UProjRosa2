#pragma once
#include "CoreMinimal.h"
#include "SingleUiController.h"
#include "Templates/SubclassOf.h"
#include "MultipleUiController.generated.h"

class AChildUiController;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AMultipleUiController : public ASingleUiController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MControllerCreateNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AChildUiController> MCreateControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AChildUiController*> MChildControllerList;
    
public:
    AMultipleUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AChildUiController* CreateChildUiController();
    
};

