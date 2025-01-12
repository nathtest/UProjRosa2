#pragma once
#include "CoreMinimal.h"
#include "TextReplaceTagTableRowBase.h"
#include "TextReplaceTagSpTableRow.generated.h"

USTRUCT(BlueprintType)
struct FTextReplaceTagSpTableRow : public FTextReplaceTagTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MDefaultProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MAccessType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MReplaceLogicPresetName;
    
    GAMEBASESYSTEM_API FTextReplaceTagSpTableRow();
};

