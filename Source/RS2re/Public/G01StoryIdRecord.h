#pragma once
#include "CoreMinimal.h"
#include "G01StoryHistoryID.h"
#include "G01StoryIdRecord.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01StoryIdRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01StoryHistoryID StoryID;
    
    FG01StoryIdRecord();
};

