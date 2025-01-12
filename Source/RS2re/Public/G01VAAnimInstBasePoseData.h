#pragma once
#include "CoreMinimal.h"
#include "EVisualActorAnimQuality.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EVisualActorAnimQuality -FallbackName=EVisualActorAnimQuality
#include "G01VAAnimInstBasePoseData.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FG01VAAnimInstBasePoseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisualActorAnimQuality QualityType;
    
    RS2RE_API FG01VAAnimInstBasePoseData();
};

