#pragma once
#include "CoreMinimal.h"
#include "G01FormationIDStruct.h"
#include "G01PartyFormationData.generated.h"

USTRUCT(BlueprintType)
struct FG01PartyFormationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01FormationIDStruct FormationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FormationNumber;
    
    RS2RE_API FG01PartyFormationData();
};

