#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "G01DebugDefaultSettingCSVTableRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugDefaultSettingCSVTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSettingFile;
    
    GAMEBASESYSTEM_API FG01DebugDefaultSettingCSVTableRowStruct();
};

