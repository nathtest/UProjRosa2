#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "AppPulldownStruct.h"
#include "G01GeneralLipPresetID.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01GeneralLipPresetID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01GeneralLipPresetID();
};
FORCEINLINE uint32 GetTypeHash(const FG01GeneralLipPresetID) { return 0; }

