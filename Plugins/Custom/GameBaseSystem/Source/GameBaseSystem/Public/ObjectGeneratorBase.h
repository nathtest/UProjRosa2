#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "GeneratorBase.h"
#include "ObjectGeneratorBase.generated.h"

class AActor;
class AObjectBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AObjectGeneratorBase : public AGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AObjectBase> MCreateObjectSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MIsEditIndex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCreateObjectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsDebugConstructionProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjectBase* MCreatedObject;
    
public:
    AObjectGeneratorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateObject();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AObjectBase* GetCreatedObject() const;
    
    UFUNCTION(BlueprintCallable)
    void DestoryCreatedObject(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugConstructionProcessInitialization();
    
    UFUNCTION(BlueprintCallable)
    void ActiveDebugConstructionProcess();
    
};

