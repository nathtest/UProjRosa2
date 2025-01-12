#pragma once
#include "CoreMinimal.h"
#include "EG01PartyCharacterSpellType.h"
#include "G01BattleSpellLearnTerm.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleSpellLearnTerm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PartyCharacterSpellType MLevelType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MLevelBorder1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PartyCharacterSpellType MLevelType2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MLevelBorder2;
    
    FG01BattleSpellLearnTerm();
};

