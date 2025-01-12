#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "AppPulldownStruct.h"
#include "G01FieldItemIDStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01FieldItemIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01FieldItemIDStruct();
};

