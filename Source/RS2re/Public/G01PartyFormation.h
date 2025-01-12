#pragma once
#include "CoreMinimal.h"
#include "G01PartyFormationData.h"
#include "G01PartyFormation.generated.h"

USTRUCT(BlueprintType)
struct FG01PartyFormation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartyFormationData MainFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartyFormationData SubFormation;
    
    RS2RE_API FG01PartyFormation();
};

