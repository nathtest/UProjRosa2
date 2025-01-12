#pragma once
#include "CoreMinimal.h"
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "SimpleActorGeneratorBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SimpleActorGeneratorBase -FallbackName=SimpleActorGeneratorBase
#include "G01RoomManagerObserverInf.h"
#include "G01SimpleActorGeneratorInf.h"
#include "G01SimpleActorGeneratorBase.generated.h"

class UG01RoomManagerAccessor;
class URoomInfoComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01SimpleActorGeneratorBase : public ASimpleActorGeneratorBase, public IG01RoomManagerObserverInf, public IG01SimpleActorGeneratorInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* RoomManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* RoomInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomID> TargetRoomIDList;
    
public:
    AG01SimpleActorGeneratorBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

