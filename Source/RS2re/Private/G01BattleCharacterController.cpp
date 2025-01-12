#include "G01BattleCharacterController.h"
#include "G01AbilityManagerAccessor.h"
#include "G01BattleManagerAccessor.h"
#include "G01InventoryManagerAccessor.h"
#include "Templates/SubclassOf.h"

AG01BattleCharacterController::AG01BattleCharacterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MBattleManagerAccessor = CreateDefaultSubobject<UG01BattleManagerAccessor>(TEXT("BattleManagerAccessor"));
    this->AbilityManagerAccessor = CreateDefaultSubobject<UG01AbilityManagerAccessor>(TEXT("AbilityManagerAccessor"));
    this->InventoryManagerAccessor = CreateDefaultSubobject<UG01InventoryManagerAccessor>(TEXT("InventoryManagerAccessor"));
}

void AG01BattleCharacterController::UpdateCharacterStatus() {
}

void AG01BattleCharacterController::ReinforceEnemyCharacter(FName InBattleCharacterId, FTransform InTransform, int32 InFormationNo, bool& OutSuccess, AActor*& OutCharacter) {
}

void AG01BattleCharacterController::IsDefeat(bool& ReIsDefeat) {
}

void AG01BattleCharacterController::GetNotDeadCharacterList(TArray<AG01BattleCharacterBase*>& ReCharacterList) {
}

void AG01BattleCharacterController::GetFormationJammerCount(int32& Out) {
}

void AG01BattleCharacterController::GetCharacterListToDefeat(TArray<AG01BattleCharacterBase*>& OutCharacterList) {
}

void AG01BattleCharacterController::GetCharacterList(TArray<AG01BattleCharacterBase*>& ReCharacterList) {
}

void AG01BattleCharacterController::GetCharacterDownCount(int32& Re) {
}

void AG01BattleCharacterController::GetCharacterCount(int32& Re) {
}

void AG01BattleCharacterController::GetCharacterAliveCount(int32& Re) {
}

void AG01BattleCharacterController::GetAliveCharacterList(TArray<AG01BattleCharacterBase*>& ReCharacterList) {
}

void AG01BattleCharacterController::FindDuplicateNo(AActor* InCharacter, bool& ReFound, int32& ReDuplicateNo) {
}

void AG01BattleCharacterController::FindCharacterIndex(AActor* InCharacter, bool& ReFound, int32& ReIndex) {
}

void AG01BattleCharacterController::FindCharacterFormationNo(AActor* InCharacter, bool& ReFound, int32& ReFormationNo) {
}

void AG01BattleCharacterController::FindCharacterAtFormation(int32 InFormationNo, bool& ReFound, AG01BattleCharacterBase*& ReCharacter) {
}

void AG01BattleCharacterController::DBG_MakeDisplayName_Implementation(AG01BattleCharacterBase* InCharacter, FName InBattleCharaId, int32 InDuplicateNo, bool& OutIsChange, FString& OutDisplayName, FString& OutDebugName) {
}

void AG01BattleCharacterController::Clear() {
}

void AG01BattleCharacterController::ChangeCharacterFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, FTransform InSrcTransform, FTransform InDstTransform, bool& ReSuccess) {
}

void AG01BattleCharacterController::AddPartyCharacter(TSubclassOf<AG01BattleCharacterBase> InCharacterClass, TSubclassOf<AG01CharacterVisualActor> InVisualActorClass, FTransform InTransform, AActor* InOwner, int32 InCharacterIndex, int32 InFormationNo, FName InBattleCharacterId, const FG01CharacterID& InCharacterId, const FG01PartyCharaInfoTableRow& InPartyCharaInfo, const FG01CharaVariableStatus& InPartyVariableStatus, const FG01CharaStatus& InPartyStatus, const FG01SkillLevel& InPartySkill, const FG01SpellLevel& InPartySpell, const FG01ItemArmorDataStruct& InArmorStatus, AActor*& ReCharacter) {
}

void AG01BattleCharacterController::AddEnemyCharacter(TSubclassOf<AG01BattleCharacterBase> InCharacterClass, FTransform InTransform, AActor* InOwner, int32 InCharacterIndex, int32 InFormationNo, FName InBattleCharacterId, int32 InForceLevel, const FG01BattleEnemyTableRow& InEnemyData, const FG01BattleEnemyEnhanceTableRow& InEnhanceData, AActor*& ReCharacter) {
}


