#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EG01BattleArtsType.h"
#include "G01AddedPotentObserverInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleManagerObserverInf.h"
#include "G01CharacterID.h"
#include "G01ExpActionLogStruct.h"
#include "G01ExpActionLogComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ExpActionLogComponent : public UActorComponent, public IG01BattleCommandManagerObserverInf, public IG01BattleManagerObserverInf, public IG01AddedPotentObserverInf {
    GENERATED_BODY()
public:
    UG01ExpActionLogComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UsedArts(FG01CharacterID InCharacterId, EG01BattleArtsType InUsedArtsType);
    
    UFUNCTION(BlueprintCallable)
    void ThrowAction();
    
    UFUNCTION(BlueprintCallable)
    void Set(const TArray<FG01ExpActionLogStruct>& InCharacterLog);
    
    UFUNCTION(BlueprintCallable)
    void Get(TArray<FG01ExpActionLogStruct>& OutCharacterLog);
    

    // Fix for true pure virtual functions not being implemented
};

