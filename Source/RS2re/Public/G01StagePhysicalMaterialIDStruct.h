#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01StagePhysicalMaterialIDStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01StagePhysicalMaterialIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01StagePhysicalMaterialIDStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01StagePhysicalMaterialIDStruct) { return 0; }

