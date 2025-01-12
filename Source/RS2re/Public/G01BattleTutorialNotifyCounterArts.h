#pragma once
#include "CoreMinimal.h"
#include "G01BattleTutorialNotifyArtsBase.h"
#include "G01BattleTutorialNotifyCounterArts.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleTutorialNotifyCounterArts : public FG01BattleTutorialNotifyArtsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackerArtsId;
    
    FG01BattleTutorialNotifyCounterArts();
};

