#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BlackSmithMenuIDStruct.h"
#include "G01BlackSmithMenuConditionsStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithMenuConditionsStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BlackSmithMenuIDStruct FlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagConditions;
    
    FG01BlackSmithMenuConditionsStruct();
};

