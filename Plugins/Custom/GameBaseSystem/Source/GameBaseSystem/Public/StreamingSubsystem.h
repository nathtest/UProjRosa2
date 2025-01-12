#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Subsystem -FallbackName=Subsystem
#include "StreamingSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UStreamingSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UStreamingSubsystem();

};

