#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01IconActorManagerInf.h"
#include "G01IconActorManager.generated.h"

class UG01RoomManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01IconActorManager : public AManagerBase, public IG01IconActorManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* MRoomManagerAccessor;
    
public:
    AG01IconActorManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

