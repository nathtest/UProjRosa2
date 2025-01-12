#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsEffectSetting.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsEffectSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MBasePointUsePart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MTargetPointUsePart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MHideSourceAilment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MHideTargetAilment;
    
    FG01BattleArtsEffectSetting();
};

