#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveBase -FallbackName=CurveBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "LipsyncParam.h"
#include "CurveLipsync.generated.h"

UCLASS(Blueprintable)
class LIPSYNCCURVE_API UCurveLipsync : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[5];
    
    UCurveLipsync();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLipsyncParam GetVisemesValue(float InTime) const;
    
};

