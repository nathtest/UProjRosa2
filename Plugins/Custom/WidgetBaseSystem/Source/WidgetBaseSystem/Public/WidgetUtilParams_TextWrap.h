#pragma once
#include "CoreMinimal.h"
#include "TextSizeGetterDelegate.h"
#include "WidgetUtilParams_TextWrap.generated.h"

USTRUCT(BlueprintType)
struct FWidgetUtilParams_TextWrap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextSizeGetter TextSizeGetter;
    
    WIDGETBASESYSTEM_API FWidgetUtilParams_TextWrap();
};

