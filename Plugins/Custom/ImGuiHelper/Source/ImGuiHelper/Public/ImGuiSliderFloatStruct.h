#pragma once
#include "CoreMinimal.h"
#include "ImGuiSliderFloatCurrentValueDelegateDelegate.h"
#include "ImGuiSliderFloatExecDelegateDelegate.h"
#include "ImGuiSliderFloatOptionStruct.h"
#include "ImGuiSliderFloatStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiSliderFloatStruct : public FImGuiSliderFloatOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiSliderFloatCurrentValueDelegate CurrentValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiSliderFloatExecDelegate ExecDelegate;
    
    IMGUIHELPER_API FImGuiSliderFloatStruct();
};

