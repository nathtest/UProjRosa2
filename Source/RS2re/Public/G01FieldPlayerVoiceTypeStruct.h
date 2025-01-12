#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01FieldPlayerVoiceTypeStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01FieldPlayerVoiceTypeStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01FieldPlayerVoiceTypeStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01FieldPlayerVoiceTypeStruct) { return 0; }

