#pragma once
#include "CoreMinimal.h"
#include "G01BattleTutorialNotifyFathom.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleTutorialNotifyFathom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LearnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FathomId;
    
    FG01BattleTutorialNotifyFathom();
};

