#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectFindInterface -FallbackName=LevelObjectFindInterface
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01ClassInfoManagerInterface.h"
#include "G01ClassInfoManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01ClassInfoManager : public AManagerBase, public IG01ClassInfoManagerInterface, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MClassInfoTable;
    
public:
    AG01ClassInfoManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

