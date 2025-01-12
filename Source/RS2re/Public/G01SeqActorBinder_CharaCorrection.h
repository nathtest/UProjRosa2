#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VAPartsKey -FallbackName=VAPartsKey
#include "VAPartsKey.h"
#include "G01SeqActorBinder_CharaCorrection.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqActorBinder_CharaCorrection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVAPartsKey ActorBasePositionType;
    
    FG01SeqActorBinder_CharaCorrection();
};

