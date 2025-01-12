#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01BlackSmithMenuUiControllerInf.h"
#include "G01BlackSmithManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01BlackSmithManager : public AManagerBase, public IG01BlackSmithMenuUiControllerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MBlackSmithTable;
    
public:
    AG01BlackSmithManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

