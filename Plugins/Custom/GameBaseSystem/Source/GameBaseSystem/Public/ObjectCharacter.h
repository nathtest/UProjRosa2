#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "EDebugSystemLogType.h"
#include "EventResult.h"
#include "InteractBaseObserverInf.h"
#include "InteractColliderTag.h"
#include "InteractCreateEventInfo.h"
#include "InteractReceiverOwnerInf.h"
#include "LevelObjectID.h"
#include "ObjectCharacterInterface.h"
#include "SequenceReplaceObjectInterface.h"
#include "VisualActorOwnerInf.h"
#include "Components/ChildActorComponent.h"
#include "GameFramework/Character.h"
#include "ObjectCharacter.generated.h"

class AActor;
class UAttachPositionComponent;
class UChildActorComponent;
class UIconPositionComponent;
class UInteractIconPositionComponent;
class UInteractReceiverHelperComponent;
class UInteractSenderComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AObjectCharacter : public ACharacter, public IVisualActorOwnerInf, public IInteractReceiverOwnerInf, public ISequenceReplaceObjectInterface, public IObjectCharacterInterface, public IInteractBaseObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* MVisualActorCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttachPositionComponent* MAttachPositionRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractReceiverHelperComponent* MReceiverHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractSenderComponent*> MInteractSenderComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractIconPositionComponent* MInteractIconPositionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIconPositionComponent* MIconPositionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsShowCollisionWhenActiveOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FInteractColliderTag, FInteractCreateEventInfo> MEventInfoByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectID MOwnerGeneratorLevelObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPositionCorrection;
    
public:
    AObjectCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupVisualMeshTransform();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLookTargetActor(AActor* InTargetActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEventEnd(const FEventResult& InEndResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HitInteractMovement();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActorFName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableTick(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableGravityMode();
    
    UFUNCTION(BlueprintCallable)
    void DisableGravityMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddLogBP(EDebugSystemLogType InLogType, const FString& InMessage, const FString& InHeader, float InDuration, bool InIsPrintToGame);
    

    // Fix for true pure virtual functions not being implemented
};

