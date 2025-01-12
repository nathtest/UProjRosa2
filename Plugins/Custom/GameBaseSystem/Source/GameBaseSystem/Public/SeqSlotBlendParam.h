#pragma once
#include "CoreMinimal.h"
#include "SeqSlotBlendParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSlotBlendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFromSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MToSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MBlendOutTime;
    
    FSeqSlotBlendParam();
};

