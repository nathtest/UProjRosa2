#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01LipAnimData.h"
#include "G01VoiceLanguageID.h"
#include "Engine/DataTable.h"
#include "G01LipAnimTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01LipAnimTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01VoiceLanguageID, FG01LipAnimData> LipAnimByLanguage;
    
    FG01LipAnimTableRow();
};

