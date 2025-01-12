#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleEnemyThinkBase.generated.h"

class AActor;
class UG01BattleCharacterHandle;
class UG01BattleManagerHandle;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleEnemyThinkBase : public UObject, public IG01BattleManagerObserverInf, public IG01BattleCommandManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Initialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Self;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleCharacterHandle* SelfHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleManagerHandle* ManagerHandle;
    
public:
    UG01BattleEnemyThinkBase();

    UFUNCTION(BlueprintCallable)
    void SetSelfCharacter(AActor* InSelf);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_Self(UG01BattleCharacterHandle*& OutSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BE_Manager(UG01BattleManagerHandle*& OutManager);
    

    // Fix for true pure virtual functions not being implemented
};

