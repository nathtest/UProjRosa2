#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "LoggingGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ULoggingGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULoggingGameInstanceSubsystem();

};

