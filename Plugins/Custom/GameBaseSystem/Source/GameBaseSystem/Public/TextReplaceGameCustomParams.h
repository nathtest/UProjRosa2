#pragma once
#include "CoreMinimal.h"
#include "TextReplaceGameCustomParams.generated.h"

USTRUCT(BlueprintType)
struct FTextReplaceGameCustomParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MIntValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MTextIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MStringValues;
    
    GAMEBASESYSTEM_API FTextReplaceGameCustomParams();
};

