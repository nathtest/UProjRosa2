#pragma once
#include "CoreMinimal.h"
#include "G01BattleLinkPlaySetting.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleLinkPlaySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBaseStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBaseEndFrame;
    
    FG01BattleLinkPlaySetting();
};

