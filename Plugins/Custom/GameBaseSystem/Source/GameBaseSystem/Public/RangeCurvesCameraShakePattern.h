#pragma once
#include "CoreMinimal.h"
#include "AppSimpleCameraShakePattern.h"
#include "RangeCurvesParam.h"
#include "RangeCurvesCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEBASESYSTEM_API URangeCurvesCameraShakePattern : public UAppSimpleCameraShakePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MTimeToTurnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMinRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMaxRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRangeCurvesParam MHorizon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRangeCurvesParam MVertical;
    
public:
    URangeCurvesCameraShakePattern();

};

