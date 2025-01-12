#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "FlagSystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemObserverInf -FallbackName=FlagSystemObserverInf
#include "GimmickFlagInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickFlagInfo -FallbackName=GimmickFlagInfo
#include "G01GimmickObjectBase.h"
#include "G01FlagSwitchObjectBase.generated.h"

class UChildActorComponent;
class UFlagSystemManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01FlagSwitchObjectBase : public AG01GimmickObjectBase, public IFlagSystemObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickFlagInfo MTargetFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* MObjectActorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* MObjectActorB;
    
public:
    AG01FlagSwitchObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwitchObject(bool InFlagValue);
    

    // Fix for true pure virtual functions not being implemented
};

