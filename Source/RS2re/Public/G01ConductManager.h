#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01ConductManagerInf.h"
#include "G01ConductManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01ConductManager : public AManagerBase, public IG01ConductManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MConductDataTable;
    
public:
    AG01ConductManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

