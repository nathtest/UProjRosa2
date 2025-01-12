#pragma once
#include "CoreMinimal.h"
#include "G01VAIkTargetParam.h"
#include "G01VACcdikTargetParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VACcdikTargetParam : public FG01VAIkTargetParam {
    GENERATED_BODY()
public:
    RS2RE_API FG01VACcdikTargetParam();
};

