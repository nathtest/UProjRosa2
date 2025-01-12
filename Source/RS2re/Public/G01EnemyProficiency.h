#pragma once
#include "CoreMinimal.h"
#include "G01EnemyProficiency.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyProficiency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MSkillLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MSpellLevel;
    
    RS2RE_API FG01EnemyProficiency();
};

