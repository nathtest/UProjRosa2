#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "EG01MapAspectType.h"
#include "G01MapAspectEffectContainer.generated.h"

class UDataTable;
class UNiagaraSystem;

UCLASS(Blueprintable)
class RS2RE_API AG01MapAspectEffectContainer : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MMapAspectEffectTable;
    
public:
    AG01MapAspectEffectContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Spawn(EG01MapAspectType InMapAspectType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibility(bool Invisible);
    
    UFUNCTION(BlueprintCallable)
    void Prepare(EG01MapAspectType InMapAspectType);
    
protected:
    UFUNCTION(BlueprintCallable)
    UNiagaraSystem* GetEffectAsset(EG01MapAspectType InMapAspectType);
    
private:
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UNiagaraSystem> FindEffectAsset(EG01MapAspectType InMapAspectType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearLoadedAssets();
    
};

