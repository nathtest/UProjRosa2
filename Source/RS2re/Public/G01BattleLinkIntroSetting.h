#pragma once
#include "CoreMinimal.h"
#include "G01BattleLinkIntroSetting.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleLinkIntroSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> LinkIntroSequence;
    
    FG01BattleLinkIntroSetting();
};

