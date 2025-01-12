#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01CrowdEncountInfo.h"
#include "Engine/DataTable.h"
#include "G01CrowdEncountTableRow.generated.h"

USTRUCT(BlueprintType)
struct FG01CrowdEncountTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CrowdEncountInfo CrowdEncountData;
    
    RS2RE_API FG01CrowdEncountTableRow();
};

