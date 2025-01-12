#pragma once
#include "CoreMinimal.h"
#include "FlagSetupDataRow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSetupDataRow -FallbackName=FlagSetupDataRow
#include "EG01FlagTakeoverOperation.h"
#include "G01FlagSetupDataRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01FlagSetupDataRow : public FFlagSetupDataRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01FlagTakeoverOperation TakeoverOperation;
    
    FG01FlagSetupDataRow();
};

