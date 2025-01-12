#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardDismissType.h"
#include "VirtualKeyboardDismissResult.generated.h"

USTRUCT(BlueprintType)
struct FVirtualKeyboardDismissResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardDismissType DismissType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputText;
    
    VIRTUALKEYBOARDHELPER_API FVirtualKeyboardDismissResult();
};

