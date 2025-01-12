#pragma once
#include "CoreMinimal.h"
#include "AppSimpleCameraShakePattern.h"
#include "HRangeUpDownParam.h"
#include "HRangeUpDownCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEBASESYSTEM_API UHRangeUpDownCameraShakePattern : public UAppSimpleCameraShakePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHRangeUpDownParam MHorizon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHRangeUpDownParam MVertical;
    
public:
    UHRangeUpDownCameraShakePattern();

};

