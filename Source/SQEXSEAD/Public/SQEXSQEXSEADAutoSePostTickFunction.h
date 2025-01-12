#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SQEXSQEXSEADAutoSePostTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSQEXSEADAutoSePostTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SQEXSEAD_API FSQEXSQEXSEADAutoSePostTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSQEXSQEXSEADAutoSePostTickFunction> : public TStructOpsTypeTraitsBase2<FSQEXSQEXSEADAutoSePostTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

