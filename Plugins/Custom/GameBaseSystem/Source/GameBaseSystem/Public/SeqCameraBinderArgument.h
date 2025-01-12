#pragma once
#include "CoreMinimal.h"
#include "SeqCameraBindArg.h"
#include "SeqCameraBinderArgument.generated.h"

USTRUCT(BlueprintType)
struct FSeqCameraBinderArgument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCameraBindArg> MCameraBindParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCameraPatternIndex;
    
    GAMEBASESYSTEM_API FSeqCameraBinderArgument();
};

