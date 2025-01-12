#pragma once
#include "CoreMinimal.h"
#include "ImGuiComboOptionStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiComboOptionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ComboList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Detail;
    
    IMGUIHELPER_API FImGuiComboOptionStruct();
};

