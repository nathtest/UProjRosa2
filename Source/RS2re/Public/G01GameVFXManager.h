#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01GameVFXManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GameVFXManager : public AManagerBase {
    GENERATED_BODY()
public:
    AG01GameVFXManager(const FObjectInitializer& ObjectInitializer);

};

