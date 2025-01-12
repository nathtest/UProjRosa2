#pragma once
#include "CoreMinimal.h"
#include "EffectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectID -FallbackName=EffectID
#include "G01SeqFxPointInfo.h"
#include "G01SeqFxPlayArgs.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqFxPlayArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectID MEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqFxPointInfo> MBasePointInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqFxPointInfo> MTargetPointInfo;
    
    RS2RE_API FG01SeqFxPlayArgs();
};

