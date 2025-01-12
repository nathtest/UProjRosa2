#pragma once
#include "CoreMinimal.h"
#include "AppAnimNotifyState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppAnimNotifyState -FallbackName=AppAnimNotifyState
#include "G01AnimNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState : public UAppAnimNotifyState {
    GENERATED_BODY()
public:
    UG01AnimNotifyState();

};

