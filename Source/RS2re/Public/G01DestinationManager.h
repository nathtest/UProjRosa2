#pragma once
#include "CoreMinimal.h"
#include "GeneratorManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GeneratorManagerObserverInf -FallbackName=GeneratorManagerObserverInf
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01DestinationManagerInf.h"
#include "G01DestinationUserInf.h"
#include "G01DestinationManager.generated.h"

class UG01DestinationManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01DestinationManager : public AManagerBase, public IG01DestinationManagerInf, public IG01DestinationUserInf, public IGeneratorManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UG01DestinationManagerAccessor*> MAccessors;
    
public:
    AG01DestinationManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

