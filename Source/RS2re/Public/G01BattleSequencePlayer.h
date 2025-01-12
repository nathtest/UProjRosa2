#pragma once
#include "CoreMinimal.h"
#include "G01BattleSequencePlayer.generated.h"

class AActor;
class UG01BattleSequencePlayComponent;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleSequencePlayComponent* PlayComponent;
    
    FG01BattleSequencePlayer();
};

