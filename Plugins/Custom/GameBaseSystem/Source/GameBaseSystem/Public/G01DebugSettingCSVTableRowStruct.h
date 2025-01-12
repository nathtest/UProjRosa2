#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/Datatable.h"
#include "G01DebugSettingCSVTableRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugSettingCSVTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    GAMEBASESYSTEM_API FG01DebugSettingCSVTableRowStruct();
};

