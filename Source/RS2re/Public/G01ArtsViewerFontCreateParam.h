#pragma once
#include "CoreMinimal.h"
#include "G01ArtsViewerFontCreateParam.generated.h"

USTRUCT(BlueprintType)
struct FG01ArtsViewerFontCreateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    RS2RE_API FG01ArtsViewerFontCreateParam();
};

