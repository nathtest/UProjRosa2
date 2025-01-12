#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "SequencerCtrlCmdTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSequencerCtrlCmdTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MDescription;
    
    GAMEBASESYSTEM_API FSequencerCtrlCmdTableRow();
};

