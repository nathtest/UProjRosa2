#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01VariationCharaIDStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01VariationCharaIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01VariationCharaIDStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01VariationCharaIDStruct) { return 0; }

