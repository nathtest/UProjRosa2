#pragma once
#include "CoreMinimal.h"
#include "ImGuiCheckBoxOptionStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiCheckBoxOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Detail;
    
    IMGUIHELPER_API FImGuiCheckBoxOptionStruct();
};

