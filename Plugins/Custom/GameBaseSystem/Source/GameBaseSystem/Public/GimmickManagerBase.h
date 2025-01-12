#pragma once
#include "CoreMinimal.h"
#include "GeneratorManagerInf.h"
#include "LevelMoveObserverInf.h"
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "GimmickManagerBase.generated.h"

class AGimmickObjectBase;
class UActorVisibilityController;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGimmickManagerBase : public AManagerBase, public ILevelObjectFindInterface, public IGeneratorManagerInf, public ILevelMoveObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorVisibilityController* VisibilityController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGimmickObjectBase*> MAllGimmicks;
    
public:
    AGimmickManagerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

