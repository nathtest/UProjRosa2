#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01MenuFormationEffectStruct.generated.h"

class AG01MenuFormationEffect;

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuFormationEffectStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01MenuFormationEffect> MMenuFormationEffect;
    
    FG01MenuFormationEffectStruct();
};

