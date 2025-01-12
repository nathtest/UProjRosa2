#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01AddedPotentObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01AddedPotentObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnSabotageExtarnal(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent, bool InByFaint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnSabotageAilment(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent, bool InByFaint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnRemoveExtarnal(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnRemoveEnhance(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnRemoveAilment(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnInvalidAilment(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnDuplicationExtarnal(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnDuplicationEnhance(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnDuplicationAilment(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnAddExtarnal(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnAddEnhance(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_OnAddAilment(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01AddedPotent_ActiveAbility(FName InAbilityId);
    
};

