#pragma once
#include "CoreMinimal.h"
#include "ImGuiComboCurrentIndexDelegateDelegate.h"
#include "ImGuiComboExecDelegateDelegate.h"
#include "ImGuiComboOptionStruct.h"
#include "ImGuiComboStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiComboStruct : public FImGuiComboOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiComboCurrentIndexDelegate CurrentIndexDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiComboExecDelegate ExecDelegate;
    
    IMGUIHELPER_API FImGuiComboStruct();
};

