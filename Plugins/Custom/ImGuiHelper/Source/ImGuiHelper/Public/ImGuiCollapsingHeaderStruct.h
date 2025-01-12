#pragma once
#include "CoreMinimal.h"
#include "ImGuiCollapsingHeaderExecDelegateDelegate.h"
#include "ImGuiCollapsingHeaderStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiCollapsingHeaderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImGuiCollapsingHeaderExecDelegate ExecDelegate;
    
    IMGUIHELPER_API FImGuiCollapsingHeaderStruct();
};

