#pragma once
#include "CoreMinimal.h"
#include "AccessorActorComponentBase.h"
#include "EUiControllerId.h"
#include "UiControllerAccessor.generated.h"

class AUiController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UUiControllerAccessor : public UAccessorActorComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUiControllerId MUiControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUiController* MUiController;
    
public:
    UUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveUiController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUiControllerId GetUiControllerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AUiController* GetMainUiController();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateUiController();
    
    UFUNCTION(BlueprintCallable)
    void ActivateUiController();
    
};

