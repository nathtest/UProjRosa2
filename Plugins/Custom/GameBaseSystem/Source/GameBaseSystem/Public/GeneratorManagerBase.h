#pragma once
#include "CoreMinimal.h"
#include "GeneratorArray.h"
#include "GeneratorManagerInf.h"
#include "LevelObjectFindInterface.h"
#include "LevelObjectID.h"
#include "ManagerBase.h"
#include "GeneratorManagerBase.generated.h"

class AActor;
class AGeneratorBase;
class UActorVisibilityController;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGeneratorManagerBase : public AManagerBase, public IGeneratorManagerInf, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorVisibilityController* VisibilityController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FLevelObjectID, AGeneratorBase*> MGeneratorByLevelObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratorArray MNoneIDGenerators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratorArray MAllGenerators;
    
public:
    AGeneratorManagerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDestroyGeneratorActor(AGeneratorBase* InGenerator, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedActor(AActor* InGenerator);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateGeneratorActor(AGeneratorBase* InGenerator, AActor* InActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeneratorArray GetGeneratorsIdUnassigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FLevelObjectID, AGeneratorBase*> GetGeneratorsIdAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeneratorArray GetGeneratorsAll() const;
    

    // Fix for true pure virtual functions not being implemented
};

