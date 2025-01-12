#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "G01MapAspectActionUnit.h"
#include "G01MapAspectAction.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MapAspectAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleArtsType ArtsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01MapAspectActionUnit> UnitList;
    
    FG01MapAspectAction();
};

