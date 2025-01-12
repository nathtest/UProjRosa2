#pragma once
#include "CoreMinimal.h"
#include "TextWrapWordList.h"
#include "TextWrapLines.generated.h"

USTRUCT(BlueprintType)
struct WIDGETBASESYSTEM_API FTextWrapLines {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextWrapWordList> Lines;
    
    FTextWrapLines();
};

