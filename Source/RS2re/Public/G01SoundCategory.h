#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01SoundCategory.generated.h"

USTRUCT(BlueprintType)
struct FG01SoundCategory : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01SoundCategory();
};
FORCEINLINE uint32 GetTypeHash(const FG01SoundCategory) { return 0; }

