#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "PlayerManagerInf.h"
#include "PlayerVisibilityParam.h"
#include "PlayerManagerBase.generated.h"

class AActor;
class ACharacter;
class UStreamingManagerAccessComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API APlayerManagerBase : public AManagerBase, public ILevelObjectFindInterface, public IPlayerManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBeginPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBeginPlayerStartActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacter> MCreateCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStreamingManagerAccessComponent* MStreamingManagerAccessCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MPlayerInteractLockActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerVisibilityParam> VisibilityQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowTeleportLandingRaycast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingRaycastDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceGroundOffsetLocation;
    
public:
    APlayerManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBeginPlayerStartTag(FName InPlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerCameraRotation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDestroyedVisibilityRegister(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasInputAuthority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetPlayerCharacter(int32 InPlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableInputPlayerCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableInputPlayer(bool InIsPause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableInputPlayerCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableInputPlayer(bool InIsPause);
    

    // Fix for true pure virtual functions not being implemented
};

