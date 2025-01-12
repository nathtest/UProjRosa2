#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "G01PartyLearnArtsStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PartyLearnArtsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleArtsType ArtsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTemporary;
    
    FG01PartyLearnArtsStruct();
};

