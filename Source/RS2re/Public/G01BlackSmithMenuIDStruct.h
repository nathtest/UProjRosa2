#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01BlackSmithMenuIDStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithMenuIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01BlackSmithMenuIDStruct();
};

