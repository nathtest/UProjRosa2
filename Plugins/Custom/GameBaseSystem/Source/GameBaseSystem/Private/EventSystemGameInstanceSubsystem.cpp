#include "EventSystemGameInstanceSubsystem.h"

UEventSystemGameInstanceSubsystem::UEventSystemGameInstanceSubsystem() {
}

bool UEventSystemGameInstanceSubsystem::HasEventAtLevelTransition(const FLevelTransitionInfoView& InLevelInfo) const {
    return false;
}

bool UEventSystemGameInstanceSubsystem::HasAnyEventAtLevelTransition() const {
    return false;
}

void UEventSystemGameInstanceSubsystem::FindEventAtLevelTransition(const TSoftClassPtr<AEventObjectBase>& InEventClass, bool& ReIsFound, FLevelTransitionInfoView& ReLevelinfo, FEventQueueParam& ReQueueParam, TEnumAsByte<EEventQueuePriority::Type>& RePriority) {
}


