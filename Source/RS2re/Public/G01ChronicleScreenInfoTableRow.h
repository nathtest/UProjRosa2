#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "G01ChronicleSevenHerosParam.h"
#include "G01ChronicleScreenInfoTableRow.generated.h"

class UG01ChronologyEventImageWidgetBase;

USTRUCT(BlueprintType)
struct RS2RE_API FG01ChronicleScreenInfoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HistoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayChronicleScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UG01ChronologyEventImageWidgetBase> EventImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ChronicleSevenHerosParam> SevenHerosParam;
    
    FG01ChronicleScreenInfoTableRow();
};

