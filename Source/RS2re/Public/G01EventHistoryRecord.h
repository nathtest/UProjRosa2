#pragma once
#include "CoreMinimal.h"
#include "G01CharacterID.h"
#include "G01HistoryID.h"
#include "G01EventHistoryRecord.generated.h"

USTRUCT(BlueprintType)
struct FG01EventHistoryRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01HistoryID HistoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
    RS2RE_API FG01EventHistoryRecord();
};

