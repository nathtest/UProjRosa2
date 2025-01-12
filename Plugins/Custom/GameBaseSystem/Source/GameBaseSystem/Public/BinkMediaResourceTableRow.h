#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BinkMediaResourceFilePaths.h"
#include "Engine\DataTable.h"
#include "BinkMediaResourceTableRow.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FBinkMediaResourceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinkMediaResourceFilePaths Paths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PulldownTooltip;
    
    FBinkMediaResourceTableRow();
};

