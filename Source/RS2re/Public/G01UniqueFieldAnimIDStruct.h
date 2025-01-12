#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01UniqueFieldAnimIDStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01UniqueFieldAnimIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01UniqueFieldAnimIDStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01UniqueFieldAnimIDStruct) { return 0; }

