#pragma once
#include "CoreMinimal.h"
#include "IconManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=IconManagerBase -FallbackName=IconManagerBase
#include "G01IconManagerInterface.h"
#include "G01IconManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01IconManager : public AIconManagerBase, public IG01IconManagerInterface {
    GENERATED_BODY()
public:
    AG01IconManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

