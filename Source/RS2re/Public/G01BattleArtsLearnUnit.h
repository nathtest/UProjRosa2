#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsLearnUnit.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsLearnUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    FG01BattleArtsLearnUnit();
};

