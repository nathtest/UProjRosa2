#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EPlayerReactionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlayerReactionType -FallbackName=EPlayerReactionType
#include "G01FieldPlayerManagerObserverInf.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldPlayerManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldPlayerManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldPlayerManager_StartFieldAttack(AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldPlayerManager_OnInteractDeactivated(AActor* InSourceActor, EPlayerReactionType InPlayerReactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldPlayerManager_OnInteractActivated(AActor* InSourceActor, USceneComponent* InPositionComponent, EPlayerReactionType InPlayerReactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldPlayerManager_EndPlayerReadyMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldPlayerManager_EndFieldAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldPlayerManager_EnableInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldPlayerManager_DisableInput();
    
};

