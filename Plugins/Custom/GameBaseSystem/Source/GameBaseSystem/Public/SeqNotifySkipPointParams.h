#pragma once
#include "CoreMinimal.h"
#include "ESeqSkipSectionType.h"
#include "SeqNotifySkipPointParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqNotifySkipPointParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeFullSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqSkipSectionType FullSkipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeSectionSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqSkipSectionType SectionSkipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameOffset;
    
    FSeqNotifySkipPointParams();
};

