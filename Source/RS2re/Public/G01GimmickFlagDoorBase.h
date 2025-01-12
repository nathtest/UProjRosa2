#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "FlagSystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemObserverInf -FallbackName=FlagSystemObserverInf
#include "GimmickFlagInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickFlagInfo -FallbackName=GimmickFlagInfo
#include "G01GimmickDoorBase.h"
#include "G01GimmickFlagDoorBase.generated.h"

class UFlagSystemManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickFlagDoorBase : public AG01GimmickDoorBase, public IFlagSystemObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickFlagInfo MTargetFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
public:
    AG01GimmickFlagDoorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorClose();
    

    // Fix for true pure virtual functions not being implemented
};

