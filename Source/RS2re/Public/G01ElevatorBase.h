#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "FloorInfo.h"
#include "G01GimmickElevatorObserverInf.h"
#include "G01GimmickElevatorSettingTableRow.h"
#include "G01GimmickObjectBase.h"
#include "G01ElevatorBase.generated.h"

class UAnimationAsset;
class UDataTable;
class UObject;
class USQEXSEADSoundBank;

UCLASS(Blueprintable)
class RS2RE_API AG01ElevatorBase : public AG01GimmickObjectBase, public IG01GimmickElevatorObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MElevatorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MElevatorTypeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MElevatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MElevatorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloorInfo> MElevatorFloors;
    
public:
    AG01ElevatorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSwitchMesh(UObject* InSwitchMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetElevatorMesh(UObject* InElevatorMesh);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCounterObjectPosition(FVector InPos);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySwitchAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGateOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGateClose();
    
    UFUNCTION(BlueprintCallable)
    bool PlayGateAnimation(bool InIsOpen, bool InIsForward);
    
    UFUNCTION(BlueprintCallable)
    void MoveNextFloor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetSwitchMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetSwitchAnimationAsset();
    
    UFUNCTION(BlueprintCallable)
    void GetStartSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
    UFUNCTION(BlueprintCallable)
    void GetLoopSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetGateAnimationAsset(bool InIsOpen, bool InIsForward);
    
    UFUNCTION(BlueprintCallable)
    void GetEndSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
private:
    UFUNCTION(BlueprintCallable)
    FG01GimmickElevatorSettingTableRow GetElevatorSetting();
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetElevatorMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector GetDefaultCounterObjectPosition();
    

    // Fix for true pure virtual functions not being implemented
};

