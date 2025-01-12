#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ActorVisibleRequest.h"
#include "Templates/SubclassOf.h"
#include "GeneratorManagerInf.generated.h"

class AActor;
class AGeneratorBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UGeneratorManagerInf : public UInterface {
    GENERATED_BODY()
};

class IGeneratorManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManager_RemoveGenerateObjectVisibility(AActor* InRequester);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManager_RegenerateActor(TSubclassOf<AGeneratorBase> InFilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManager_OnDestroyActor(AGeneratorBase* InGenerator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManager_OnCreateActor(AGeneratorBase* InGenerator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_GeneratorManager_GetGenerateObjectVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_GeneratorManager_GetExistNumByClass(const TSoftClassPtr<AActor>& InSoftClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_GeneratorManager_CheckExistByClass(const TSoftClassPtr<AActor>& InSoftClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManager_AllGenerateComplete(bool InIsSynchronous);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManager_AddGenerateObjectVisibility(const FActorVisibleRequest& InRequest);
    
};

