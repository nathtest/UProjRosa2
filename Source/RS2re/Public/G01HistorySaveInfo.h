#pragma once
#include "CoreMinimal.h"
#include "EG01RecordGenerationType.h"
#include "G01EventHistoryRecord.h"
#include "G01PastEmperorCharacter.h"
#include "G01StoryIdRecord.h"
#include "G01HistorySaveInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01HistorySaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01StoryIdRecord> StoryIdRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01EventHistoryRecord> EventRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PastEmperorCharacter> PastEmperorCharaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01RecordGenerationType, int32> RecordGenerationList;
    
    FG01HistorySaveInfo();
};

