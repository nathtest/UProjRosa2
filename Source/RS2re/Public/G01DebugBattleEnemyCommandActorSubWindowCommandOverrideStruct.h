#pragma once
#include "CoreMinimal.h"
#include "G01DebugBattleEnemyCommandActorSubWindowCommandOverrideStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01DebugBattleEnemyCommandActorSubWindowCommandOverrideStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    FG01DebugBattleEnemyCommandActorSubWindowCommandOverrideStruct();
};

