#pragma once
#include "CoreMinimal.h"
#include "TextWrapWordParams.generated.h"

USTRUCT(BlueprintType)
struct WIDGETBASESYSTEM_API FTextWrapWordParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WordIndex;
    
    FTextWrapWordParams();
};

