#pragma once
#include "CoreMinimal.h"
#include "LevelMoveObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelMoveObserverInf -FallbackName=LevelMoveObserverInf
#include "PlayerManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=PlayerManagerBase -FallbackName=PlayerManagerBase
#include "SequenceManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceManagerObserverInf -FallbackName=SequenceManagerObserverInf
#include "G01FieldPlayerManagerInf.h"
#include "G01FieldPlayerManager.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class RS2RE_API AG01FieldPlayerManager : public APlayerManagerBase, public IG01FieldPlayerManagerInf, public ISequenceManagerObserverInf, public ILevelMoveObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacter> OverrideCreateCharacterShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacter> OverrideCreateCharacterBoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacter> OverrideCreateCharacterStoneShip;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MEnableStealth;
    
public:
    AG01FieldPlayerManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleEnableStealth();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReloadPlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableStealth();
    
    UFUNCTION(BlueprintCallable)
    void DisableStealth();
    
    UFUNCTION(BlueprintCallable)
    void CheckEnableStealth(bool& OutIsEnableStealth);
    

    // Fix for true pure virtual functions not being implemented
};

