#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EEventQueuePriority.h"
#include "EventArguments.h"
#include "LevelTransitionInfoView.h"
#include "EventManagerInf.generated.h"

class AEventObjectBase;
class UWorld;

UINTERFACE(Blueprintable, MinimalAPI)
class UEventManagerInf : public UInterface {
    GENERATED_BODY()
};

class IEventManagerInf : public IInterface {
    GENERATED_BODY()
public:
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
   // void Inf_EventManager_EnqueueEventAtLevelTransitionByAsset(const TSoftObjectPtr<UWorld>& InLevelAsset, const TSoftClassPtr<AEventObjectBase>& InEventClass, FEventArguments InArgs, TEnumAsByte<EEventQueuePriority::Type> InPriority);
    
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void Inf_EventManager_EnqueueEventAtLevelTransition(FLevelTransitionInfoView InLevelInfo, const TSoftClassPtr<AEventObjectBase>& InEventClass, FEventArguments InArgs, TEnumAsByte<EEventQueuePriority::Type> InPriority);
    
};

