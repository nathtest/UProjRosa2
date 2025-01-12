#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EUpdatePositionMethod -FallbackName=EUpdatePositionMethod
#include "ESeqSkipSectionType.h"
#include <MovieSceneSequencePlayer.h>
#include "SeqSkipSection.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSkipSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqSkipSectionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpdatePositionMethod CheckPointUpdateMethod;
    
    FSeqSkipSection();
};

