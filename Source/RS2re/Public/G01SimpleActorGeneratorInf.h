#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01SimpleActorGeneratorInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SimpleActorGeneratorInf : public UInterface {
    GENERATED_BODY()
};

class IG01SimpleActorGeneratorInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FRoomID> Inf_G01SimpleActorGenerator_GetTargetRoomIDList();
    
};

