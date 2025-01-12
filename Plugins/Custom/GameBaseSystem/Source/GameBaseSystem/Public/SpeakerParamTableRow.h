#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "SpeakerParamTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSpeakerParamTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MSpeakerNameText;
    
    GAMEBASESYSTEM_API FSpeakerParamTableRow();
};

