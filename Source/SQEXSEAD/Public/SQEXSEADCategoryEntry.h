#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADCategoryEntry.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADCategoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    SQEXSEAD_API FSQEXSEADCategoryEntry();
};

