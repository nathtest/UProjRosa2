#pragma once
#include "CoreMinimal.h"
#include "EG01QCondBattleEndType.h"
#include "G01BattleFlagSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleFlagSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EG01QCondBattleEndType, FString> MBattleFlagSuffix;
    
    FG01BattleFlagSettingInfo();
};

