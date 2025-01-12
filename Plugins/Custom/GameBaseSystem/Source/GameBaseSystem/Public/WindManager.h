#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "WindManagerInterface.h"
#include "WindManager.generated.h"

class AActor;
class AWindControlActor;
class AWindDirectionalSourceActor;
class UWindCommonSettings;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AWindManager : public AManagerBase, public IWindManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWindCommonSettings* CommonSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWindDirectionalSourceActor* WindSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWindControlActor*> WindControllerQueue;
    
public:
    AWindManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDestroyWindController(AActor* InActor);
    

    // Fix for true pure virtual functions not being implemented
};

