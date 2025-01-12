#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01SequenceActorCollectPresetTableRow.generated.h"

class AG01SequenceActorCollectCollisionPresetBase;

USTRUCT(BlueprintType)
struct FG01SequenceActorCollectPresetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01SequenceActorCollectCollisionPresetBase> PresetClass;
    
    RS2RE_API FG01SequenceActorCollectPresetTableRow();
};

