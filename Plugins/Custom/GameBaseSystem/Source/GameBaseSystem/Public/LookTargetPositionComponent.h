#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "LookTargetPositionComponent.generated.h"

class USkeletalMeshComponent;
class USkeletalMeshSocket;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API ULookTargetPositionComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBindSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MTargetSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshSocket* MTargetSocket;
    
public:
    ULookTargetPositionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBindSocketName(FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetBindSkeletalMeshComponent(const USkeletalMeshComponent* InBindTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookPosition() const;
    
};

