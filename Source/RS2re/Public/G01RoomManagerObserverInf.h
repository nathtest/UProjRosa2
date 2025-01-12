#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01RoomManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01RoomManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01RoomManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01RoomManager_PostChangeRoom();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01RoomManager_ChangeRoom();
    
};

