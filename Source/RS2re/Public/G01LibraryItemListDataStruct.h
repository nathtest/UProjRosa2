#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "G01LibraryItemListDataStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01LibraryItemListDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemTypeID;
    
    FG01LibraryItemListDataStruct();
};

