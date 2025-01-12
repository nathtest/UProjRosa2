#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01VisualActorLoaderInfoStruct.h"
#include "G01VisualActorLoaderComponent.generated.h"

class AVisualActor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01VisualActorLoaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> AnimationObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01VisualActorLoaderInfoStruct> VisualActorAssetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<AVisualActor>> LoadingVisualActorQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UObject>> LoadingAnimationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisualActorLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimationLoading;
    
public:
    UG01VisualActorLoaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnVisualActor(FName InVisualActorName, AVisualActor*& ReSpawnedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadVisualActorInQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadVisualActorAsync(const FName& InVisualActorName, const TSoftClassPtr<AVisualActor>& InModelClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadVisualActorAssets(TMap<FName, TSoftClassPtr<AVisualActor>> InVisualActorInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadAnimationInQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadAnimationAsync(const FName& InAnimationName, const TSoftObjectPtr<UObject>& InAnimationObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAnimationAssets(TMap<FName, TSoftObjectPtr<UObject>> InAnimationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLoadingAssets(bool& ReIsLoading);
    
    UFUNCTION(BlueprintCallable)
    void GetAnimationObject(FName InAnimationName, UObject*& ReAnimationObject);
    
    UFUNCTION(BlueprintCallable)
    void DestoryVisualActor(FName InVisualActorName);
    
    UFUNCTION(BlueprintCallable)
    void DestoryAnimationObject(FName InAnimationName);
    
    UFUNCTION(BlueprintCallable)
    void DestoryAllVisualActor();
    
    UFUNCTION(BlueprintCallable)
    void DestoryAllAnimationObject();
    
};

