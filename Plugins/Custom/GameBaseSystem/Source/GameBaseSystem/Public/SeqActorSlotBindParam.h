#pragma once
#include "CoreMinimal.h"
#include "ESeqActorOffsetDirection.h"
#include "SeqActorAnimBindParam.h"
#include "SeqActorSlotBindParam.generated.h"

class ACharacterVisualActor;

USTRUCT(BlueprintType)
struct FSeqActorSlotBindParam : public FSeqActorAnimBindParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterVisualActor> MDefaultVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqActorOffsetDirection MOffsetLengthByDirType;
    
    GAMEBASESYSTEM_API FSeqActorSlotBindParam();
};

