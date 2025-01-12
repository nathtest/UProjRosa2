#pragma once
#include "CoreMinimal.h"
#include "EventCollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EventCollisionObjectBase -FallbackName=EventCollisionObjectBase
#include "EG01InteractObjectIconType.h"
#include "G01HudMapObjectIconInf.h"
#include "G01InteractUiContUserInf.h"
#include "G01EventCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01EventCollisionObjectBase : public AEventCollisionObjectBase, public IG01InteractUiContUserInf, public IG01HudMapObjectIconInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01InteractObjectIconType ObjectIconType;
    
public:
    AG01EventCollisionObjectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

