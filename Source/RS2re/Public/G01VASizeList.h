#pragma once
#include "CoreMinimal.h"
#include "EG01VisualActorSizeType.h"
#include "G01VASizeList.generated.h"

USTRUCT(BlueprintType)
struct FG01VASizeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01VisualActorSizeType> MSizeList;
    
    RS2RE_API FG01VASizeList();
};

