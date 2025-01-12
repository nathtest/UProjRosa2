#pragma once
#include "CoreMinimal.h"
#include "EnvironmentInfoView.h"
#include "EnvironmentSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct FEnvironmentSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvironmentInfoView MEnvSettingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MEnvPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MEnvPresetComment;
    
    GAMEBASESYSTEM_API FEnvironmentSettingInfo();
};

