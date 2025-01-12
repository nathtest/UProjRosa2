#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EPlayerReactionType.h"
#include "EventArguments.h"
#include "EventEndParams.h"
#include "EventObjectOwnerInf.generated.h"

class AEventObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UEventObjectOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IEventObjectOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_EventObject_OnExecuteEvent(AEventObjectBase* InEvent, EPlayerReactionType InReactionType, const FEventArguments& InArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_EventObject_OnEndEvent(AEventObjectBase* InEvent, EPlayerReactionType InReactionType, const FEventEndParams& InEndParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_EventObject_OnCheckEvent(AEventObjectBase* InEvent, bool InIsExecutable, EPlayerReactionType InReactionType, const FEventArguments& InArgs);
    
};

