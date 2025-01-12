#pragma once
#include "CoreMinimal.h"
#include "G01BattleEndPlaybackInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEndPlaybackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPlayer;
    
    FG01BattleEndPlaybackInfo();
};

