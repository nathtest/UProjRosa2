#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ESeqActorOffsetDirection.h"
#include "SeqActorOffsetRootComponent.generated.h"

class USeqActorOffsetPointComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USeqActorOffsetRootComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ESeqActorOffsetDirection, USeqActorOffsetPointComponent*> MOffsetPoints;
    
public:
    USeqActorOffsetRootComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetVectorLocal(ESeqActorOffsetDirection InDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetVector(ESeqActorOffsetDirection InDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffsetLength(ESeqActorOffsetDirection InDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetDirectionLocal(ESeqActorOffsetDirection InDir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetDirection(ESeqActorOffsetDirection InDir) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMaxVectorLocal(ESeqActorOffsetDirection& OutDir, float& OutSize, FVector& OutVector);
    
    UFUNCTION(BlueprintCallable)
    void GetMaxVector(ESeqActorOffsetDirection& OutDir, float& OutSize, FVector& OutVector);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EditorTick();
    
};

