#pragma once
#include "CoreMinimal.h"
#include "InteractBaseComponent.h"
#include "InteractColliderTag.h"
#include "InteractSenderComponent.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UInteractSenderComponent : public UInteractBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InteractCategoryInfoTable;
    
public:
    UInteractSenderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsExecutableInteract(bool& OutIsExecutable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInteractColliderTag GetInteractTargetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractTarget() const;
    
};

