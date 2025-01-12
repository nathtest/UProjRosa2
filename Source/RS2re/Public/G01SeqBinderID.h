#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01SeqBinderID.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqBinderID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    RS2RE_API FG01SeqBinderID();
};

