#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "EVAGazeType.h"
#include "EVALookMode.h"
#include "OnLookCurveStateChangeDelegate.h"
#include "VAFacialParams.h"
#include "VALookParams.h"
#include "VAMoveParams.h"
#include "VisualActor.h"
#include "VisualActorCharacterInf.h"
#include "CharacterVisualActor.generated.h"

class ULookTargetPositionComponent;
class UMaterialInstanceDynamic;
class UPoseableMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACharacterVisualActor : public AVisualActor, public IVisualActorCharacterInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsDisplayLookVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAutoSetLookPosSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULookTargetPositionComponent* MLookTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MDynamicMaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MModularRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> MMasterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPoseableMeshComponent*> MCopyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVALookParams MLookParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVAFacialParams MFacialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVAMoveParams MMoveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MRootMeshTransform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MLookCurveElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLookCurveStateChange MOnStartLookCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLookCurveStateChange MOnFinishLookCurve;
    
public:
    ACharacterVisualActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVectorValueToMaterial(int32 SlotNo, FName InParamName, FLinearColor InValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupDyamicMaterial();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGhostTrail(const FVector4& Color, float InInterval, float InLifespan, float InPow, float InMul);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEmissiveRateToAllMaterial(float InEmissiveRate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEmissiveRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDitherRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDisintegration();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlendingLookType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasModularRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRootMeshTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVALookMode GetLookMode(bool& OutIsAuto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVAGazeType GetGazeType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearGhostTrail();
    

    // Fix for true pure virtual functions not being implemented
};

