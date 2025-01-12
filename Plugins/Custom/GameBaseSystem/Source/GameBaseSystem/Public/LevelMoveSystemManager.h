#pragma once
#include "CoreMinimal.h"
#include "LevelMoveSystemManagerInterface.h"
#include "ManagerBase.h"
#include "ScreenTransitionManagerObserverInf.h"
#include "LevelMoveSystemManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ALevelMoveSystemManager : public AManagerBase, public ILevelMoveSystemManagerInterface, public IScreenTransitionManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MLevelTransitionTable;
    
public:
    ALevelMoveSystemManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

