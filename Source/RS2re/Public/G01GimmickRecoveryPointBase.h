#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "GimmickFlagInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickFlagInfo -FallbackName=GimmickFlagInfo
#include "ERecoveryPointType.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickRecoveryPointBase.generated.h"

class AEventObjectBase;
class UFlagSystemManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickRecoveryPointBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecoveryPointType MRecoveryPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickFlagInfo MTargetFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MRecoveryEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
public:
    AG01GimmickRecoveryPointBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFlagTrue();
    
    UFUNCTION(BlueprintCallable)
    bool GetFlag();
    
};

