#pragma once
#include "CoreMinimal.h"
#include "G01AbilityLearnNotifyPerChara.h"
#include "G01CharacterID.h"
#include "G01AbilityLearnNotify.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityLearnNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, FG01AbilityLearnNotifyPerChara> CharaInfoMap;
    
    FG01AbilityLearnNotify();
};

