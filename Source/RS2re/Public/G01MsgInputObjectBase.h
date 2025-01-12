#pragma once
#include "CoreMinimal.h"
#include "InputObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputObjectBase -FallbackName=InputObjectBase
#include "G01MsgInputObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01MsgInputObjectBase : public AInputObjectBase {
    GENERATED_BODY()
public:
    AG01MsgInputObjectBase(const FObjectInitializer& ObjectInitializer);

};

