#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIMovePathInfo.h"
#include "EAIState.h"
#include "Templates/SubclassOf.h"
#include "AIControllerComponent.generated.h"

class AAIControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAIControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIControllerBase> MController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMovePathInfo MAIMovePathParam;
    
    UAIControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAIStateID(EAIState InAiState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIControlled() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeAIComponent();
    
    UFUNCTION(BlueprintCallable)
    void EraseAIController();
    
    UFUNCTION(BlueprintCallable)
    void ChangeAIController();
    
};

