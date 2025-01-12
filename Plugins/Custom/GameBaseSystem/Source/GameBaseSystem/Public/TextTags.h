#pragma once
#include "CoreMinimal.h"
#include "TextTagParam.h"
#include "TextTags.generated.h"

USTRUCT(BlueprintType)
struct FTextTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextTagParam> MTags;
    
    GAMEBASESYSTEM_API FTextTags();
};

