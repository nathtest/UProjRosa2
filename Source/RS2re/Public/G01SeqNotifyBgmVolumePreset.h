#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01SeqNotifyBgmVolumePreset.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqNotifyBgmVolumePreset : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01SeqNotifyBgmVolumePreset();
};

