#pragma once
#include "CoreMinimal.h"
#include "G01BgmLogStruct.h"
#include "G01BgmLogExtractionStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01BgmLogExtractionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BgmLogStruct> BgmLogList;
    
    RS2RE_API FG01BgmLogExtractionStruct();
};

