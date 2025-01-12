#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "PlayerManagerAccessCompo.generated.h"

class ACharacter;
class APlayerManagerBase;
class APlayerStart;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UPlayerManagerAccessCompo : public UManagerAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerManagerBase* MPlayerManager;
    
public:
    UPlayerManagerAccessCompo(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportToPlayerStartDirect(APlayerStart* InPlayerStart);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerCameraRotation();
    
    UFUNCTION(BlueprintCallable)
    bool HasInputAuthority();
    
protected:
    UFUNCTION(BlueprintCallable)
    APlayerManagerBase* GetPlayerManager();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetPlayerCharacter(int32 InPlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInputPlayerCamera();
    
    UFUNCTION(BlueprintCallable)
    void EnableInputPlayer(bool InIsPause);
    
    UFUNCTION(BlueprintCallable)
    void DisableInputPlayerCamera();
    
    UFUNCTION(BlueprintCallable)
    void DisableInputPlayer(bool InIsPause);
    
};

