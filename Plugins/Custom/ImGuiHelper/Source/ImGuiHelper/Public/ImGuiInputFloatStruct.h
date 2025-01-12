#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputFloatCurrentValueDelegateDelegate.h"
#include "ImGuiInputFloatExecDelegateDelegate.h"
#include "ImGuiInputFloatOptionStruct.h"
#include "ImGuiInputFloatStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiInputFloatStruct : public FImGuiInputFloatOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiInputFloatCurrentValueDelegate CurrentValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiInputFloatExecDelegate ExecDelegate;
    
    IMGUIHELPER_API FImGuiInputFloatStruct();
};

