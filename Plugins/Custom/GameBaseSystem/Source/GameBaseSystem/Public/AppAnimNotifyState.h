#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AppAnimNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class GAMEBASESYSTEM_API UAppAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAppAnimNotifyState();

};

