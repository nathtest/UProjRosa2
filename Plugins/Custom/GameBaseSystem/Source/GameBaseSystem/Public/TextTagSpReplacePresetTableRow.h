#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "TextTagSpReplaceLogicInfo.h"
#include "TextTagSpReplacePresetTableRow.generated.h"

USTRUCT(BlueprintType)
struct FTextTagSpReplacePresetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextTagSpReplaceLogicInfo> MLogicInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MDescription;
    
    GAMEBASESYSTEM_API FTextTagSpReplacePresetTableRow();
};

