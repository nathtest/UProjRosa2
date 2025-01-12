#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01BattleTaskBridgeComponent.generated.h"

class AActor;
class AG01SequenceControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleTaskBridgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01SequenceControllerBase* SequenceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TaskSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AG01SequenceControllerBase*> cacheDestroySequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> cacheDestroyActorList;
    
public:
    UG01BattleTaskBridgeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestFinishSequence(bool IsImmediate);
    
    UFUNCTION(BlueprintCallable)
    void RequestFinishCameraSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AG01SequenceControllerBase* GetSequence() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckPermissionToDestroySequence(AG01SequenceControllerBase* InSequence) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CacheSequence(AG01SequenceControllerBase* InSequence, AActor* InSourceActor);
    
};

