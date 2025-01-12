#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01EnvSoundIDStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EnvSoundIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01EnvSoundIDStruct();
};

