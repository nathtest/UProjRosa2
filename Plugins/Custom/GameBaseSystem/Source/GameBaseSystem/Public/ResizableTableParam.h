#pragma once
#include "CoreMinimal.h"
#include "EImGuiTableWidthType.h"
#include "ResizableTableParam.generated.h"

USTRUCT(BlueprintType)
struct FResizableTableParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ColumnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImGuiTableWidthType WidthType;
    
    GAMEBASESYSTEM_API FResizableTableParam();
};

