#pragma once
#include "CoreMinimal.h"
#include "ImGuiCheckBoxCurrentValueDelegateDelegate.h"
#include "ImGuiCheckBoxExecDelegateDelegate.h"
#include "ImGuiCheckBoxOptionStruct.h"
#include "ImGuiCheckBoxStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiCheckBoxStruct : public FImGuiCheckBoxOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiCheckBoxCurrentValueDelegate CurrentValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiCheckBoxExecDelegate ExecDelegate;
    
    IMGUIHELPER_API FImGuiCheckBoxStruct();
};

