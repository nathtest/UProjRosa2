#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "SequenceMarkedFrameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSequenceMarkedFrameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    GAMEBASESYSTEM_API FSequenceMarkedFrameTableRow();
};

