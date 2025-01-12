#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "G01AnimNotifyState_EnableColliisionBase.h"
#include "G01AnimNotifyState_EnableBlockColliision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState_EnableBlockColliision : public UG01AnimNotifyState_EnableColliisionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
public:
    UG01AnimNotifyState_EnableBlockColliision();

};

