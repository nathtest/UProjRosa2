#pragma once
#include "CoreMinimal.h"
#include "ImGuiButtonExecDelegateDelegate.h"
#include "ImGuiButtonStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiButtonStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiButtonExecDelegate ExecDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Detail;
    
    IMGUIHELPER_API FImGuiButtonStruct();
};

