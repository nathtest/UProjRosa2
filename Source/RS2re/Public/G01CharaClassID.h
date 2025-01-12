#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01CharaClassID.generated.h"

USTRUCT(BlueprintType)
struct FG01CharaClassID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01CharaClassID();
};
FORCEINLINE uint32 GetTypeHash(const FG01CharaClassID) { return 0; }

