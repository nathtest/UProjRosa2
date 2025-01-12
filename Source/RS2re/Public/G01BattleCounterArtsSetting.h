#pragma once
#include "CoreMinimal.h"
#include "G01BattleCounterArtsSetting.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCounterArtsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPlayLast;
    
    FG01BattleCounterArtsSetting();
};

