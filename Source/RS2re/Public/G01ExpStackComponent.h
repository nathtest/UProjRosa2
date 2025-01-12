#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01ExpStackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ExpStackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01ExpStackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ThrowExp();
    
    UFUNCTION(BlueprintCallable)
    void SetUseDevelopmentBonus(bool InUse);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetExceptionBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetDevelopmentBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetBonus(float InBonus);
    
    UFUNCTION(BlueprintCallable)
    void GetUseDevelopmentBonus(bool& OutUse);
    
    UFUNCTION(BlueprintCallable)
    void GetSpecialBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    void GetExceptionBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    void GetDevelopmentBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    void GetCorrectedBonusDetails(int32& OutExp, bool isUseBonus, bool isUseSpecialBonus, bool isUseExceptionBonus, bool isUseDevelopmentBonus);
    
    UFUNCTION(BlueprintCallable)
    void GetCorrectedBonus(int32& OutExp);
    
    UFUNCTION(BlueprintCallable)
    void GetBonus(float& OutBonus);
    
    UFUNCTION(BlueprintCallable)
    void Get(int32& OutExp);
    
    UFUNCTION(BlueprintCallable)
    void Add(int32 InExp);
    
};

