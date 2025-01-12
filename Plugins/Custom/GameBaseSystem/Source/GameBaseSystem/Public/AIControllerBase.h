#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIMovePathInfo.h"
#include "AIMoveSpeedInfo.h"
#include "AIRotationSpeedInfo.h"
#include "AppAIController.h"
#include "EAISpeed.h"
#include "EAIState.h"
#include "AIControllerBase.generated.h"

class AActor;
class APawn;
class UPawnMovementComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AAIControllerBase : public AAppAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* MMoveCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* MCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MWarpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIState MAIState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MAfterVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MAfterVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MJumpLineStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MJumpLineDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMovePathInfo MAIMovePathParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveSpeedInfo MAISpeedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIRotationSpeedInfo MAIRotationSpeedParam;
    
public:
    AAIControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAIState(EAIState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeAIController();
    
    UFUNCTION(BlueprintCallable)
    float GetSpeedByID(EAISpeed InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationSpeedByID(EAISpeed InID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetHeadLocationRotation(FVector& ReLocation, FRotator& ReRotation) const;
    
    UFUNCTION(BlueprintCallable)
    EAIState GetAIState();
    
};

