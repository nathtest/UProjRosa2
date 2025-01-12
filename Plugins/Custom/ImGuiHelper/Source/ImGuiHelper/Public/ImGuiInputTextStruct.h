#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputTextExecDelegateDelegate.h"
#include "ImGuiInputTextStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiInputTextStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiInputTextExecDelegate ExecDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Detail;
    
    IMGUIHELPER_API FImGuiInputTextStruct();
};

