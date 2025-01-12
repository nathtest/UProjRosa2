#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01MovementPointObjectUnit.h"
#include "G01MovementPointUnit.h"
#include "G01PointMovementComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PointMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> MObject;
    
    UG01PointMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMovementPointObject(const TArray<FG01MovementPointObjectUnit>& InList);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementPoint(const TArray<FG01MovementPointUnit>& InList);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementObject(USceneComponent* InObject);
    
    UFUNCTION(BlueprintCallable)
    void GetMovementPosition(FName InKey, bool& OutIsExist, FTransform& OutTransform);
    
};

