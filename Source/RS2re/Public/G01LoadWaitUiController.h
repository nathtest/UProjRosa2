#pragma once
#include "CoreMinimal.h"
#include "G01UiController.h"
#include "G01LoadWaitUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01LoadWaitUiController : public AG01UiController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MActiveElapsedTime;
    
public:
    AG01LoadWaitUiController(const FObjectInitializer& ObjectInitializer);

};

