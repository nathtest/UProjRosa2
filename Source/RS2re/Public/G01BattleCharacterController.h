#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "G01BattleEnemyEnhanceTableRow.h"
#include "G01BattleEnemyTableRow.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleSystemController.h"
#include "G01CharaStatus.h"
#include "G01CharaVariableStatus.h"
#include "G01CharacterID.h"
#include "G01ItemArmorDataStruct.h"
#include "G01PartyCharaInfoTableRow.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "Templates/SubclassOf.h"
#include "G01BattleCharacterController.generated.h"

class AActor;
class AG01BattleCharacterBase;
class AG01CharacterVisualActor;
class UG01AbilityManagerAccessor;
class UG01BattleManagerAccessor;
class UG01InventoryManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleCharacterController : public AG01BattleSystemController, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* MBattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01AbilityManagerAccessor* AbilityManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01InventoryManagerAccessor* InventoryManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01BattleCharacterBase*> MControlCharacterList;
    
public:
    AG01BattleCharacterController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacterStatus();
    
    UFUNCTION(BlueprintCallable)
    void ReinforceEnemyCharacter(FName InBattleCharacterId, FTransform InTransform, int32 InFormationNo, bool& OutSuccess, AActor*& OutCharacter);
    
    UFUNCTION(BlueprintCallable)
    void IsDefeat(bool& ReIsDefeat);
    
    UFUNCTION(BlueprintCallable)
    void GetNotDeadCharacterList(TArray<AG01BattleCharacterBase*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetFormationJammerCount(int32& Out);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterListToDefeat(TArray<AG01BattleCharacterBase*>& OutCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterList(TArray<AG01BattleCharacterBase*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterDownCount(int32& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterCount(int32& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterAliveCount(int32& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetAliveCharacterList(TArray<AG01BattleCharacterBase*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void FindDuplicateNo(AActor* InCharacter, bool& ReFound, int32& ReDuplicateNo);
    
    UFUNCTION(BlueprintCallable)
    void FindCharacterIndex(AActor* InCharacter, bool& ReFound, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable)
    void FindCharacterFormationNo(AActor* InCharacter, bool& ReFound, int32& ReFormationNo);
    
    UFUNCTION(BlueprintCallable)
    void FindCharacterAtFormation(int32 InFormationNo, bool& ReFound, AG01BattleCharacterBase*& ReCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DBG_MakeDisplayName(AG01BattleCharacterBase* InCharacter, FName InBattleCharaId, int32 InDuplicateNo, bool& OutIsChange, FString& OutDisplayName, FString& OutDebugName);
    
public:
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacterFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, FTransform InSrcTransform, FTransform InDstTransform, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void AddPartyCharacter(TSubclassOf<AG01BattleCharacterBase> InCharacterClass, TSubclassOf<AG01CharacterVisualActor> InVisualActorClass, FTransform InTransform, AActor* InOwner, int32 InCharacterIndex, int32 InFormationNo, FName InBattleCharacterId, const FG01CharacterID& InCharacterId, const FG01PartyCharaInfoTableRow& InPartyCharaInfo, const FG01CharaVariableStatus& InPartyVariableStatus, const FG01CharaStatus& InPartyStatus, const FG01SkillLevel& InPartySkill, const FG01SpellLevel& InPartySpell, const FG01ItemArmorDataStruct& InArmorStatus, AActor*& ReCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyCharacter(TSubclassOf<AG01BattleCharacterBase> InCharacterClass, FTransform InTransform, AActor* InOwner, int32 InCharacterIndex, int32 InFormationNo, FName InBattleCharacterId, int32 InForceLevel, const FG01BattleEnemyTableRow& InEnemyData, const FG01BattleEnemyEnhanceTableRow& InEnhanceData, AActor*& ReCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

