#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "SeqMarkedFrameID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqMarkedFrameID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FSeqMarkedFrameID();
};

