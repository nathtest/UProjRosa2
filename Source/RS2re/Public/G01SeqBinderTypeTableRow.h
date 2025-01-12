#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01SeqBinderTypeTableRow.generated.h"

class ASequenceActControllerBinderBase;

USTRUCT(BlueprintType)
struct FG01SeqBinderTypeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASequenceActControllerBinderBase> BinderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    RS2RE_API FG01SeqBinderTypeTableRow();
};

