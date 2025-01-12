#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01CharacterAttachVAComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01CharacterAttachVAComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01CharacterAttachVAComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Visible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Invisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Detach();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Attach(const UClass* VisualActorClass, FName SocketName, USceneComponent* SceneComponent, FTransform OffsetTransform);
    
};

