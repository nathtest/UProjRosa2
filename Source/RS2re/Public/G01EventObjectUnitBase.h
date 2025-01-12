#pragma once
#include "CoreMinimal.h"
#include "EventObjectUnitBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EventObjectUnitBase -FallbackName=EventObjectUnitBase
#include "G01EventObjectUnitBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01EventObjectUnitBase : public AEventObjectUnitBase {
    GENERATED_BODY()
public:
    AG01EventObjectUnitBase(const FObjectInitializer& ObjectInitializer);

};

