#pragma once
#include "CoreMinimal.h"
#include "TextReplaceGameCustomParams.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=TextReplaceGameCustomParams -FallbackName=TextReplaceGameCustomParams
#include "G01TextReplaceGameCustomParams.generated.h"

USTRUCT(BlueprintType)
struct FG01TextReplaceGameCustomParams : public FTextReplaceGameCustomParams {
    GENERATED_BODY()
public:
    RS2RE_API FG01TextReplaceGameCustomParams();
};

