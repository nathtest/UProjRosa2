#pragma once
#include "CoreMinimal.h"
#include "TextWrapWordList.generated.h"

USTRUCT(BlueprintType)
struct WIDGETBASESYSTEM_API FTextWrapWordList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> Words;
    
    FTextWrapWordList();
};

