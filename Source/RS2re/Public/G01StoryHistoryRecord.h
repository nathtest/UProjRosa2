#pragma once
#include "CoreMinimal.h"
#include "G01StoryHistoryID.h"
#include "G01StoryHistoryTableRow.h"
#include "G01StoryHistoryRecord.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01StoryHistoryRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01StoryHistoryID StoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01StoryHistoryTableRow Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OriginalOrder;
    
    FG01StoryHistoryRecord();
};

