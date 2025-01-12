#pragma once
#include "CoreMinimal.h"
#include "G01MsgSingleUiControllerInf.h"
#include "G01MsgSingleUiControllerUserInf.h"
#include "G01UiController.h"
#include "SoundManagerAccessComponent.h"
#include "G01MsgUiControllerBase.generated.h"

class UG01LipSyncManagerAccessor;
class UG01TextManagerAccessor;
class USoundManagerAccessComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01MsgUiControllerBase : public AG01UiController, public IG01MsgSingleUiControllerInf, public IG01MsgSingleUiControllerUserInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01TextManagerAccessor* TextManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundManagerAccessComponent* MSoundManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01LipSyncManagerAccessor* MLipSyncManagerAccessor;
    
public:
    AG01MsgUiControllerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

