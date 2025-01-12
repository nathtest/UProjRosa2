#pragma once
#include "CoreMinimal.h"
#include "SoundSystemManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SoundSystemManager -FallbackName=SoundSystemManager
#include "G01SoundSystemManagerInterface.h"
#include "G01SoundSystemManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SoundSystemManager : public ASoundSystemManager, public IG01SoundSystemManagerInterface {
    GENERATED_BODY()
public:
    AG01SoundSystemManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

