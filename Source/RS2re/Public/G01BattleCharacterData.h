#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFromationNumberId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ReplacedBySafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BeforeReplaceId;
    
    RS2RE_API FG01BattleCharacterData();
};

