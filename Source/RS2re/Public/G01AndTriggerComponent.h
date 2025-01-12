#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EAndTriggerComponentSetValueBranchesEnum.h"
#include "G01AndTriggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01AndTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MNum;
    
    UG01AndTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValue(int32 InIndex, bool InValue, EAndTriggerComponentSetValueBranchesEnum& Branches);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetValue(int32 InIndex, bool& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetAndValue(bool& OutAndValue);
    
};

