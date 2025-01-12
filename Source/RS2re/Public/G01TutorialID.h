#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01TutorialID.generated.h"

USTRUCT(BlueprintType)
struct FG01TutorialID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01TutorialID();
};
FORCEINLINE uint32 GetTypeHash(const FG01TutorialID) { return 0; }

