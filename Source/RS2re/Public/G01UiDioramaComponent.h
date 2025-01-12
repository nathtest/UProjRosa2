#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01UiDioramaComponent.generated.h"

class AG01UiDiorama;
class AVisualActor;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01UiDioramaComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01UiDiorama> AssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01UiDiorama* Diorama;
    
public:
    UG01UiDioramaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnDiorama(const FTransform& InSpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void Open(TArray<FName> InParameterList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsDioramaExist(bool& ReIsExist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueByKey(FName InKey, float& ReValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetObjectInDiorama(const FName InObjectName, USceneComponent*& ReObject);
    
    UFUNCTION(BlueprintCallable)
    void DestoryDiorama();
    
    UFUNCTION(BlueprintCallable)
    void CommandVoice(const TArray<FName>& InCommandNameList);
    
    UFUNCTION(BlueprintCallable)
    void CommandDiorama(const FName InCommandName, const TArray<float>& InValue);
    
    UFUNCTION(BlueprintCallable)
    void CommandCharacter(const FName InCommandName, const AVisualActor* InVisualActor, const UObject* InAnimation, const TArray<float>& InValue);
    
    UFUNCTION(BlueprintCallable)
    void CommandCamera(FName InCommandName, const TArray<float>& InValue);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

