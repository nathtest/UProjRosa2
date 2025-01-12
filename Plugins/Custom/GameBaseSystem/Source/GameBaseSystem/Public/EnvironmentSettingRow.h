#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/Datatable.h"
#include "EnvironmentSettingRow.generated.h"

USTRUCT(BlueprintType)
struct FEnvironmentSettingRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MEnvPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MEnvPresetComment;
    
    GAMEBASESYSTEM_API FEnvironmentSettingRow();
};

