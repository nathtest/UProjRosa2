#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01ThroneManagerInf.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01ThroneMenuUiControllerInf.h"
#include "G01ThroneMenuManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01ThroneMenuManager : public AManagerBase, public IG01ThroneMenuUiControllerInf, public IG01ThroneManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MThroneMenuTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01ThroneMenuUiControllerDataStructID EventTargetInstitution;
    
public:
    AG01ThroneMenuManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01ThroneMenuUiControllerDataStructID GetEventTargetInstitution() const;
    

    // Fix for true pure virtual functions not being implemented
};

