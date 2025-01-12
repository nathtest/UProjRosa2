#pragma once
#include "CoreMinimal.h"
#include "ESeqOriginOverrideType.h"
#include "SeqOriginOverrideParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqOriginOverrideParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqOriginOverrideType MOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MOriginTargetSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MOriginTargetActor;
    
    FSeqOriginOverrideParam();
};

