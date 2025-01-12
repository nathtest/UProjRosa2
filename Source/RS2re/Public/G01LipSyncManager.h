#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01LipSyncLoadedRessources.h"
#include "G01LipSyncManagerInf.h"
#include "G01LipSyncManager.generated.h"

class UDataTable;
class UG01VoiceManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01LipSyncManager : public AManagerBase, public IG01LipSyncManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LipAnimTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GeneralLipAnimTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01LipSyncLoadedRessources Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01VoiceManagerAccessor* VoiceManagerAccessor;
    
public:
    AG01LipSyncManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

