#pragma once
#include "CoreMinimal.h"
#include "EG01GameDifficultyType.h"
#include "G01CharacterID.h"
#include "G01FormationIDStruct.h"
#include "G01BattlePresetRecordDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01BattlePresetRecordDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01GameDifficultyType DifficaltyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01CharacterID> PartyMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01FormationIDStruct FormationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevCount;
    
    RS2RE_API FG01BattlePresetRecordDataStruct();
};

