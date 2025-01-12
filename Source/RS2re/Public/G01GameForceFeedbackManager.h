#pragma once
#include "CoreMinimal.h"
#include "GameForceFeedbackManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameForceFeedbackManager -FallbackName=GameForceFeedbackManager
#include "G01GameForceFeedbackManagerInf.h"
#include "G01OptionMenuUiControllerObserverInf.h"
#include "G01GameForceFeedbackManager.generated.h"

class UG01GameSystemDataManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GameForceFeedbackManager : public AGameForceFeedbackManager, public IG01GameForceFeedbackManagerInf, public IG01OptionMenuUiControllerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataManagerAccessor* GameSystemDataManagerAccessor;
    
public:
    AG01GameForceFeedbackManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

