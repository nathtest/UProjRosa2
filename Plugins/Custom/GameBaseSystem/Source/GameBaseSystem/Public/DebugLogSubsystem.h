#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "DebugMainGameLogStruct.h"
#include "DebugLogSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UDebugLogSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDebugLogSubsystem();

    UFUNCTION(BlueprintCallable)
    void LogWindowClose();
    
    UFUNCTION(BlueprintCallable)
    void LogForceOff();
    
    UFUNCTION(BlueprintCallable)
    void AddLog(const FDebugMainGameLogStruct& InLogInfo);
    
};

