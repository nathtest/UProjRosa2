#pragma once
#include "CoreMinimal.h"
#include "RangeIconCollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RangeIconCollisionObjectBase -FallbackName=RangeIconCollisionObjectBase
#include "G01InteractUiContUserInf.h"
#include "G01RangeIconCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01RangeIconCollisionObjectBase : public ARangeIconCollisionObjectBase, public IG01InteractUiContUserInf {
    GENERATED_BODY()
public:
    AG01RangeIconCollisionObjectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

