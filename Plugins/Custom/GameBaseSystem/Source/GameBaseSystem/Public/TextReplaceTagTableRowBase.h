#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/Datatable.h"
#include "TextReplaceTagTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FTextReplaceTagTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MDescription;
    
    GAMEBASESYSTEM_API FTextReplaceTagTableRowBase();
};

