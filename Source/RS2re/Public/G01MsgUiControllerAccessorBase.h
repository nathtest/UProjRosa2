#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "G01MsgUiControllerAccessorBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgUiControllerAccessorBase : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01MsgUiControllerAccessorBase(const FObjectInitializer& ObjectInitializer);

};

