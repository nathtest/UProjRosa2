#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VFXResourceData.h"
#include "VFXDataRow.generated.h"

USTRUCT(BlueprintType)
struct FVFXDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVFXResourceData> MVFXPlayerTbl;
    
    GAMEBASESYSTEM_API FVFXDataRow();
};

