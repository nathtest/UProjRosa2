#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyBgmVolumeOverride.h"
#include "G01SeqNotifyBgmVolumeStack.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqNotifyBgmVolumeStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqNotifyBgmVolumeOverride> Stack;
    
    FG01SeqNotifyBgmVolumeStack();
};

