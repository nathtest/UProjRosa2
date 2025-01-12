#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "EnvironmentManagerBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AEnvironmentManagerBase : public AManagerBase, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEnvironmentSettingTable;
    
public:
    AEnvironmentManagerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

