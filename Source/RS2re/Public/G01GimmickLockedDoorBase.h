#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "GimmickFlagInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickFlagInfo -FallbackName=GimmickFlagInfo
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickDoorBase.h"
#include "G01MsgSingleUiControllerUserInf.h"
#include "G01GimmickLockedDoorBase.generated.h"

class UFlagSystemManagerAccessCompo;
class UG01MsgRootComponent;
class UG01MsgWindowComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickLockedDoorBase : public AG01GimmickDoorBase, public IG01MsgSingleUiControllerUserInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MSimpleDoorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickFlagInfo MTargetFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgRootComponent* MMessageRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgWindowComponent* MMsgWindowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
public:
    AG01GimmickLockedDoorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool SetOpenedWithoutFlag(bool Opened);
    
    UFUNCTION(BlueprintCallable)
    bool SetOpened(bool Opened);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorClose();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOpened();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDoorLocked();
    
    UFUNCTION(BlueprintCallable)
    void CheckClose();
    

    // Fix for true pure virtual functions not being implemented
};

