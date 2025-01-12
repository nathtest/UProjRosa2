#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelTransitionInfo.h"
#include "LevelMoveObserverInf.generated.h"

UINTERFACE(Blueprintable)
class ULevelMoveObserverInf : public UInterface {
    GENERATED_BODY()
};

class ILevelMoveObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LevelMove_OnPreTeleport(const FLevelTransitionInfo& InCurrent, const FLevelTransitionInfo& InNext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LevelMove_OnPreLevelTransition(const FLevelTransitionInfo& InCurrent, const FLevelTransitionInfo& InNext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LevelMove_OnPostTeleport(const FLevelTransitionInfo& InPrev, const FLevelTransitionInfo& InCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_LevelMove_OnPostLevelTransition(const FLevelTransitionInfo& InPrev, const FLevelTransitionInfo& InCurrent);
    
};

