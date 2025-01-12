#pragma once
#include "CoreMinimal.h"
#include "EVisualActorPartialPhysicsType.h"
#include "VAPhysicsEasingTimer.h"
#include "VAPhysicsParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAPhysicsParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPhysicsMasterAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPhysicsAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVisualActorPartialPhysicsType, float> PartialPhysicsAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVAPhysicsEasingTimer MEasingTimer;
    
    FVAPhysicsParams();
};

