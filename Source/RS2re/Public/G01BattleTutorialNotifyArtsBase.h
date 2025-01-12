#pragma once
#include "CoreMinimal.h"
#include "G01BattleTutorialNotifyArtsBase.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleTutorialNotifyArtsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LearnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    FG01BattleTutorialNotifyArtsBase();
};

