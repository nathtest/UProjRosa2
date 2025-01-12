#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/Datatable.h"
#include "SequencerRequiredCreateTableRow.generated.h"

class ASequenceActionControllerBase;

USTRUCT(BlueprintType)
struct FSequencerRequiredCreateTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASequenceActionControllerBase> MControllerSoftClass;
    
    GAMEBASESYSTEM_API FSequencerRequiredCreateTableRow();
};

