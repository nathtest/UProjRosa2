#pragma once
#include "CoreMinimal.h"
#include "FlagSystemManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManager -FallbackName=FlagSystemManager
#include "G01FlagSystemManagerInterface.h"
#include "G01FlagSystemManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FlagSystemManager : public AFlagSystemManager, public IG01FlagSystemManagerInterface {
    GENERATED_BODY()
public:
    AG01FlagSystemManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

