#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01ShopIDStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ShopIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01ShopIDStruct();
};

