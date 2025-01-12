#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputBufferStruct.generated.h"

USTRUCT(BlueprintType)
struct FImGuiInputBufferStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufferSize;
    
    IMGUIHELPER_API FImGuiInputBufferStruct();
};

