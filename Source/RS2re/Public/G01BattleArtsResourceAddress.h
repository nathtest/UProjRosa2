#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsResourceAddress.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsResourceAddress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TableNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FG01BattleArtsResourceAddress();
};

