#pragma once
#include "CoreMinimal.h"
#include "TextTags.h"
#include "TextAllTags.generated.h"

USTRUCT(BlueprintType)
struct FTextAllTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextTags> MTextTags;
    
    GAMEBASESYSTEM_API FTextAllTags();
};

