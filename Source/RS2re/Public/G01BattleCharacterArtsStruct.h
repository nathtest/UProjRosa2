#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterArtsStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCharacterArtsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MSkillCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MSpellCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MFathomCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MItemCommandList;
    
    FG01BattleCharacterArtsStruct();
};

