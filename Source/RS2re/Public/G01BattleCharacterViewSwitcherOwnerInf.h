#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SeqActorCollectResultOpaque.h"
#include "G01SeqActorCollectResultTranslucent.h"
#include "G01BattleCharacterViewSwitcherOwnerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCharacterViewSwitcherOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCharacterViewSwitcherOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_ProcessNoHitToTrans(AActor* InCharacter, bool& OutSetTrans, bool& OutTrans, float& OutRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_ProcessNoHitToOpaque(AActor* InCharacter, bool& OutSetVisible, bool& OutVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_ProcessHitToTrans(AActor* InCharacter, const FG01SeqActorCollectResultTranslucent& InResultTrans, bool& OutSetTrans, bool& OutTrans, float& OutRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_ProcessHitToOpaque(AActor* InCharacter, const FG01SeqActorCollectResultOpaque& InResultOpaque, bool& OutSetVisible, bool& OutVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_GetOverlappingResult(TArray<FG01SeqActorCollectResultOpaque>& OutOpaqueResultList, TArray<FG01SeqActorCollectResultTranslucent>& OutTransResultList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_GetActorList(TArray<AActor*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_CanProcess(AActor* InCharacter, bool& OutCan);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_ApplyTrans(AActor* InCharacter, bool InTrans, float InRate, bool& OutApplied);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_G01BattleCharacterViewSwitcher_ApplyOpaque(AActor* InCharacter, bool Invisible, bool& OutApplied);
    
};

