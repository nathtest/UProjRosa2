#pragma once
#include "CoreMinimal.h"
#include "GameForceFeedbackManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameForceFeedbackManagerAccessor -FallbackName=GameForceFeedbackManagerAccessor
#include "G01GameForceFeedbackManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01GameForceFeedbackManagerAccessor : public UGameForceFeedbackManagerAccessor {
    GENERATED_BODY()
public:
    UG01GameForceFeedbackManagerAccessor(const FObjectInitializer& ObjectInitializer);

};

