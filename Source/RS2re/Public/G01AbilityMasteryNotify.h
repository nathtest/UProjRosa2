#pragma once
#include "CoreMinimal.h"
#include "G01AbilityMasteryNotifyPerChara.h"
#include "G01CharacterID.h"
#include "G01AbilityMasteryNotify.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityMasteryNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, FG01AbilityMasteryNotifyPerChara> CharaInfoMap;
    
    FG01AbilityMasteryNotify();
};

