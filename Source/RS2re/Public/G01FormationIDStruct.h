#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01FormationIDStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01FormationIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01FormationIDStruct();
};

