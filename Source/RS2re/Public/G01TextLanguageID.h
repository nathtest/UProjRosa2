#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "AppPulldownStruct.h"
#include "G01TextLanguageID.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextLanguageID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01TextLanguageID();
};
FORCEINLINE uint32 GetTypeHash(const FG01TextLanguageID) { return 0; }

