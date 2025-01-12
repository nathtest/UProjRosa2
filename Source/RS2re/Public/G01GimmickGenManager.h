#pragma once
#include "CoreMinimal.h"
#include "GimmickGenManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickGenManagerBase -FallbackName=GimmickGenManagerBase
#include "G01GimmickGenManagerInterface.h"
#include "G01GimmickGenManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickGenManager : public AGimmickGenManagerBase, public IG01GimmickGenManagerInterface {
    GENERATED_BODY()
public:
    AG01GimmickGenManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

