#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "SQEXSEADLogStorage.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADLogStorage : public UEngineSubsystem {
    GENERATED_BODY()
public:
    USQEXSEADLogStorage();

};

