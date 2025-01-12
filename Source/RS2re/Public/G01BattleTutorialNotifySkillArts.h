#pragma once
#include "CoreMinimal.h"
#include "G01BattleTutorialNotifyArtsBase.h"
#include "G01BattleTutorialNotifySkillArts.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleTutorialNotifySkillArts : public FG01BattleTutorialNotifyArtsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseArtsId;
    
    FG01BattleTutorialNotifySkillArts();
};

