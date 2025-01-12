#pragma once
#include "CoreMinimal.h"
#include "G01BattleTutorialNotifySpellArts.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleTutorialNotifySpellArts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LearnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ArtsIdList;
    
    FG01BattleTutorialNotifySpellArts();
};

