#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01TextTagCategory.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextTagCategory : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01TextTagCategory();
};
FORCEINLINE uint32 GetTypeHash(const FG01TextTagCategory) { return 0; }

