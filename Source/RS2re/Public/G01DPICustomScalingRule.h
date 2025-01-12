#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DPICustomScalingRule -FallbackName=DPICustomScalingRule
#include "G01DPICustomScalingRule.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DPICustomScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UG01DPICustomScalingRule();

};

