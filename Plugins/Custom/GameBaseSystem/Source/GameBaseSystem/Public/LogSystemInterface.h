#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LogSystemInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULogSystemInterface : public UInterface {
    GENERATED_BODY()
};

class ILogSystemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LogSystem_AddLogData(const FString& InLog, bool InIsPrintToGame, bool InIsPrintToScreen, bool InIsPrintToLog, FLinearColor InColor, float InDuration);
    
};

