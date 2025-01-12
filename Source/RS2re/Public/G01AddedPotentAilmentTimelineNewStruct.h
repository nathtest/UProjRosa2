#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentAilmentTimelineNewStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentTimelineNewStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveTimeline;
    
    RS2RE_API FG01AddedPotentAilmentTimelineNewStruct();
};

