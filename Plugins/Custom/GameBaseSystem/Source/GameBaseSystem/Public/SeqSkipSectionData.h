#pragma once
#include "CoreMinimal.h"
#include "SeqSkipSectionList.h"
#include "SeqSkipSectionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSkipSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqSkipSectionList> SectionsPerRow;
    
    FSeqSkipSectionData();
};

