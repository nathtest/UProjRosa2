#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01CharacterPartComponent.generated.h"

class UG01CharacterPartComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01CharacterPartComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01CharacterPartComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasPartParent(bool& Re) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasPartChildren(bool& Re) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartParent(UG01CharacterPartComponent*& ReParent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartChildrenCount(int32& ReCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartChildAt(int32 InIndex, UG01CharacterPartComponent*& ReChild) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachPartChild(UG01CharacterPartComponent* InChild, bool& ReSuccess);
    
};

