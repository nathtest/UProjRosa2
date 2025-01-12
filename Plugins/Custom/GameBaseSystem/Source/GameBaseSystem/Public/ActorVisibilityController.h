#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ActorVisibleRequest.h"
#include "ActorVisibilityController.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UActorVisibilityController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultVisibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActorVisibleRequest> VisibilityRequestStack;
    
public:
    UActorVisibilityController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefaultVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisibility(AActor* InRequester);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetActor(AActor* InActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDestroyRequester(AActor* InRequester);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentVisibility() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVisibility(const FActorVisibleRequest& InRequest);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetActor(AActor* InActor);
    
};

