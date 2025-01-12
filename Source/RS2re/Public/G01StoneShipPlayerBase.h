#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EG01InteractActionType.h"
#include "EG01PlayerDashType.h"
#include "G01CharacterBase.h"
#include "Templates/SubclassOf.h"
#include "G01StoneShipPlayerBase.generated.h"

class AActor;
class UAnimInstance;

UCLASS(Blueprintable)
class RS2RE_API AG01StoneShipPlayerBase : public AG01CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> MAnimBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MEnableReEncountTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PlayerDashType MDashType;
    
public:
    AG01StoneShipPlayerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetRotationRate(FRotator InRotationRate);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestInteraction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupVisualActor(AActor* InVisualActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractAction(EG01InteractActionType InActionType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInitCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStartBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompleteReadyMove();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteForceRotateCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteForceMove();
    
    UFUNCTION(BlueprintCallable)
    bool IsInteractionAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetVelocityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetRunSpeed() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FRotator GetRotationRate();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetDefaultRotationRate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetDashSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInteract();
    
    UFUNCTION(BlueprintCallable)
    void DisableInteract();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTalkCamera(const AActor* InTalkTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelTalkCamera();
    
};

