#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01RoomManagerNotifyInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01RoomManagerNotifyInterface : public UInterface {
    GENERATED_BODY()
};

class IG01RoomManagerNotifyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManagerNotify_PostChangeRoom();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManagerNotify_ChangeRoomActor(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01RoomManagerNotify_ChangeRoom();
    
};

