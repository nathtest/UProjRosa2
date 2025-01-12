#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01SpellInstituteContInf.h"
#include "G01SpellInstituteManagerObserverInf.h"
#include "G01SpellInstituteManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01SpellInstituteManager : public AManagerBase, public IG01SpellInstituteManagerObserverInf, public IG01SpellInstituteContInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MDevelopSpellParameterTable;
    
public:
    AG01SpellInstituteManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

