#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EInteractCollisionVisiblityType.h"
#include "InteractColliderSettings.h"
#include "InteractBaseComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UInteractBaseComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, FInteractColliderSettings> MColliderSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShapeComponent*> MColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableVisibleControle;
    
public:
    UInteractBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionVisiblity(EInteractCollisionVisiblityType InVisiblityType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapEvent(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapEvent(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
};

