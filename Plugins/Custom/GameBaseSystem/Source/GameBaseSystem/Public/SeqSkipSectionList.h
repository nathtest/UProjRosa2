#pragma once
#include "CoreMinimal.h"
#include "SeqSkipSection.h"
#include "SeqSkipSectionList.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSkipSectionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqSkipSection> SkipSections;
    
    FSeqSkipSectionList();
};

