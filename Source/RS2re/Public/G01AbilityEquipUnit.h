#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleManagerObserverInf.h"
#include "G01AbilityEquipUnit.generated.h"

class UG01AbilityScriptBase;

UCLASS(Blueprintable)
class RS2RE_API UG01AbilityEquipUnit : public UObject, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01AbilityScriptBase* Script;
    
public:
    UG01AbilityEquipUnit();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsActivate(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAbilityId(FName& OutAbilityId);
    

    // Fix for true pure virtual functions not being implemented
};

