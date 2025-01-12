#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputIntCurrentValueDelegateDelegate.h"
#include "ImGuiInputIntExecDelegateDelegate.h"
#include "ImGuiInputIntOptionStruct.h"
#include "ImGuiInputIntStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiInputIntStruct : public FImGuiInputIntOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiInputIntCurrentValueDelegate CurrentValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiInputIntExecDelegate ExecDelegate;
    
    IMGUIHELPER_API FImGuiInputIntStruct();
};

