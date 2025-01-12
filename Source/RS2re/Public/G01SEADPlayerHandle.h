#pragma once
#include "CoreMinimal.h"
#include "SQEXSeadHandleBP.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSeadHandleBP -FallbackName=SQEXSeadHandleBP
#include "G01SEADPlayerHandle.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SEADPlayerHandle : public FSQEXSeadHandleBP {
    GENERATED_BODY()
public:
    FG01SEADPlayerHandle();
};

