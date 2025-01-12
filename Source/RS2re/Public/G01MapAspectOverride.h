#pragma once
#include "CoreMinimal.h"
#include "EG01MapAspectType.h"
#include "G01MapAspectOverride.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MapAspectOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MapAspectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKeepAttackBonus;
    
    FG01MapAspectOverride();
};

