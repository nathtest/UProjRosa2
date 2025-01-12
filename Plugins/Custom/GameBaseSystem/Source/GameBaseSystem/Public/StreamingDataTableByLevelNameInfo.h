#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/Datatable.h"
#include "StreamingDataTableByLevelNameInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FStreamingDataTableByLevelNameInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MStreamDataTable;
    
    GAMEBASESYSTEM_API FStreamingDataTableByLevelNameInfo();
};

