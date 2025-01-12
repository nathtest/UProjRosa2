#pragma once
#include "CoreMinimal.h"
#include "EG01AttackAffinityType.h"
#include "G01BattleCharacterAffinityStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCharacterAffinityStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01AttackAffinityType> MAffinityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> MIsOpenList;
    
    FG01BattleCharacterAffinityStruct();
};

