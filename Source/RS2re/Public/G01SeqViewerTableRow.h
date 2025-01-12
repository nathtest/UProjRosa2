#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "G01SeqViewerTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqViewerTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestSectionNameView> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFlagIDListViewStruct, bool> Flags;
    
    FG01SeqViewerTableRow();
};

