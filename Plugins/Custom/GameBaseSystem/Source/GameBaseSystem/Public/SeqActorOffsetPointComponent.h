#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ESeqActorOffsetDirection.h"
#include "SeqActorOffsetPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USeqActorOffsetPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MOffsetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MOffsetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqActorOffsetDirection MOffsetDirectionType;
    
public:
    USeqActorOffsetPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetVectorLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffsetLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESeqActorOffsetDirection GetOffsetDirectionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetDirectionLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetDirection() const;
    
};

