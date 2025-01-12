#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickElevatorEntranceSettingTableRow.h"
#include "G01GimmickElevatorObserverInf.h"
#include "G01GimmickObjectBase.h"
#include "G01ElevatorControllerBase.generated.h"

class UAnimationAsset;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class RS2RE_API AG01ElevatorControllerBase : public AG01GimmickObjectBase, public IG01GimmickElevatorObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MElevatorSwitchEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEntranceTypeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MEntranceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MElevatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MElevatorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MElevatorFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MGateType;
    
public:
    AG01ElevatorControllerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopDriveAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSwitchMesh(UObject* InSwitchMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetGateMesh(UObject* InGateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveMesh(UObject* InDriveMesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PlaySwitchAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool PlayGateAnimation(bool InIsOpen);
    
    UFUNCTION(BlueprintCallable)
    bool PlayDriveAnimation(bool InIsRise);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOpened();
    
    UFUNCTION(BlueprintCallable)
    bool IsControllable();
    
    UFUNCTION(BlueprintCallable)
    UObject* GetSwitchMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetSwitchAnimationAsset();
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetGateMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetGateAnimationAsset(bool InIsOpen);
    
private:
    UFUNCTION(BlueprintCallable)
    FG01GimmickElevatorEntranceSettingTableRow GetEntranceSetting();
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetDriveMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetDriveAnimationAsset(bool InIsRise);
    
    UFUNCTION(BlueprintCallable)
    void CallElevator();
    

    // Fix for true pure virtual functions not being implemented
};

