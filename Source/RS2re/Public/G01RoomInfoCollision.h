#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RoomInfoComponent.h"
#include "G01RoomInfoCollision.generated.h"

class URoomInfoComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01RoomInfoCollision : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* RoomInfoComponent;
    
public:
    AG01RoomInfoCollision(const FObjectInitializer& ObjectInitializer);

};

