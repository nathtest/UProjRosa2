#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EEventQueuePriority.h"
#include "EventPriorityQueue.h"
#include "EventQueueParam.h"
#include "LevelTransitionInfoView.h"
#include "EventSystemGameInstanceSubsystem.generated.h"

class AEventObjectBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UEventSystemGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FEventPriorityQueue> MOrderEventAtLevelTransition;
    
public:
    UEventSystemGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEventAtLevelTransition(const FLevelTransitionInfoView& InLevelInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyEventAtLevelTransition() const;
    
    UFUNCTION(BlueprintCallable)
    void FindEventAtLevelTransition(const TSoftClassPtr<AEventObjectBase>& InEventClass, bool& ReIsFound, FLevelTransitionInfoView& ReLevelinfo, FEventQueueParam& ReQueueParam, TEnumAsByte<EEventQueuePriority::Type>& RePriority);
    
};

