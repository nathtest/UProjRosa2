#pragma once
#include "CoreMinimal.h"
#include "GameSystemDataSubsystemHelper.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameSystemDataSubsystemHelper -FallbackName=GameSystemDataSubsystemHelper
#include "G01OptionConstParamStruct.h"
#include "G01OptionSettingParamStruct.h"
#include "G01GameSystemDataSubsystemHelper.generated.h"

class UG01OptionPlatformOverrideSettings;

UCLASS(Blueprintable)
class RS2RE_API UG01GameSystemDataSubsystemHelper : public UGameSystemDataSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OptionSettingParamStruct OptionInitSettingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01OptionPlatformOverrideSettings* OptionOverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OptionConstParamStruct OptionConstParams;
    
    UG01GameSystemDataSubsystemHelper();

};

