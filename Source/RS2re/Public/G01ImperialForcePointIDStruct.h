#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "AppPulldownStruct.h"
#include "G01ImperialForcePointIDStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01ImperialForcePointIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01ImperialForcePointIDStruct();
};

