#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EManagerID.h"
#include "ManagerBase.generated.h"

class ULoadControlActorComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AManagerBase : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadControlActorComponent* MLoadControlComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MHaveLoadAssetOnBeginPlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManagerID MManagerID;
    
public:
    AManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsHardCreate(bool InIsHardCreate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReserveAsyncObjectBp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInitializeBp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectLoadCompletedBp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndInitializeBp();
    
    UFUNCTION(BlueprintCallable)
    void ObjectLoadCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EManagerID GetManagerID() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInitializeAsyncObjects(const TArray<TSoftClassPtr<UObject>>& InObjects);
    
    UFUNCTION(BlueprintCallable)
    void AddInitializeAsyncObject(TSoftClassPtr<UObject> InObject);
    
};

