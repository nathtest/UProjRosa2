#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentAilmentTimeLineStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentTimeLineStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NonActiveTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveTurnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveNextTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NonActiveNextTimeline;
    
    RS2RE_API FG01AddedPotentAilmentTimeLineStruct();
};

