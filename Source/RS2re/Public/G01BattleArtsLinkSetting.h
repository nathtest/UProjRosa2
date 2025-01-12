#pragma once
#include "CoreMinimal.h"
#include "EG01BattleLinkCameraRange.h"
#include "G01BattleArtsLinkSetting.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsLinkSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableLinkInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleLinkCameraRange LinkCameraRange;
    
    FG01BattleArtsLinkSetting();
};

