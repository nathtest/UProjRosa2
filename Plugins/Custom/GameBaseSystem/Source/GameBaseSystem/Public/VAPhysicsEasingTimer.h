#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEasingFunc -FallbackName=EEasingFunc
#include "VATimerBase.h"

#include "VAPhysicsEasingTimer.generated.h"



USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAPhysicsEasingTimer : public FVATimerBase {
    GENERATED_BODY()
public:
protected:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //TEnumAsByte<EEasingFunc> MEasingFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MPhysicsAlpha;
    
public:
    FVAPhysicsEasingTimer();
};

