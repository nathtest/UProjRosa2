#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "G01CharacterID.h"
#include "G01ExpActionLogStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ExpActionLogStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01BattleArtsType> ArtsLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeverActed;
    
    FG01ExpActionLogStruct();
};

