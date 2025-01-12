#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "G01TutorialRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TutorialRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam DisplayedFlagAccessParam;
    
    FG01TutorialRuntimeData();
};

