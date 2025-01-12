#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickElevatorObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickElevatorObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickElevatorObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickElevator_OnStop(FName InElevatorTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickElevator_OnEndOverlapBoxRide(FName InElevatorTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickElevator_OnDrive(FName InElevatorTag, bool InIsRise);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickElevator_OnControlGate(FName InElevatorTag, FName InFloor, bool InIsOpen, FName InGateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickElevator_OnCall(FName InElevatorTag, FName InFloor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickElevator_OnBeginOverlapBoxRide(FName InElevatorTag);
    
};

