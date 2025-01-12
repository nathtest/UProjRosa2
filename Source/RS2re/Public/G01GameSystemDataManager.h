#pragma once
#include "CoreMinimal.h"
#include "GameSystemDataManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameSystemDataManager -FallbackName=GameSystemDataManager
#include "G01GameSystemDataManagerInf.h"
#include "G01GameSystemDataManager.generated.h"

class UG01GameSystemDataSubsystem;

UCLASS(Blueprintable)
class RS2RE_API AG01GameSystemDataManager : public AGameSystemDataManager, public IG01GameSystemDataManagerInf {
    GENERATED_BODY()
public:
    AG01GameSystemDataManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01GameSystemDataSubsystem* GetGameSystemDataSubsystem() const;
    

    // Fix for true pure virtual functions not being implemented
};

