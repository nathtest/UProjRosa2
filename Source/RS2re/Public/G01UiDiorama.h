#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "G01UiDiorama.generated.h"

class AVisualActor;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01UiDiorama : public AAppActor {
    GENERATED_BODY()
public:
    AG01UiDiorama(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open(const TArray<FName>& InParameterList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetValueByKey(FName InKey, float& ReValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetObjectInDiorama(const FName& InObjectName, USceneComponent*& ReObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CommandVoice(const TArray<FName>& InCommandNameList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CommandDiorama(const FName& InCommandName, const TArray<float>& InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CommandCharacter(const FName& InCommandName, const AVisualActor* InVisualActor, const UObject* InAnimation, const TArray<float>& InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CommandCamera(const FName& InCommandName, const TArray<float>& InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

