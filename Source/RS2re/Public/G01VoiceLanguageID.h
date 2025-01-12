#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01VoiceLanguageID.generated.h"

USTRUCT(BlueprintType)
struct FG01VoiceLanguageID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01VoiceLanguageID();
};
FORCEINLINE uint32 GetTypeHash(const FG01VoiceLanguageID) { return 0; }

