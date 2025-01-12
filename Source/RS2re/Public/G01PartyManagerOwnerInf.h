#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01EmperorSuccessionType.h"
#include "EG01InventoryItemEquiomentType.h"
#include "G01CharaClassID.h"
#include "G01CharaStatus.h"
#include "G01CharaVariableStatus.h"
#include "G01CharacterID.h"
#include "G01ExpGrowthStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01ItemArmorDataStruct.h"
#include "G01ItemShieldDataStruct.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01PartyManagerOwnerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PartyManagerOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IG01PartyManagerOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_UnlockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_SetEmperorSuccessionType(const EG01EmperorSuccessionType InSuccessionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_SetClassGrowth(const FG01CharaClassID& InClassId, const FG01ExpGrowthStruct& InClassGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_ResetPartyData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_RequestEmperorSuccessionByClassID(const TArray<FG01CharaClassID>& InPickupClassIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_RequestEmperorSuccession(EG01EmperorSuccessionType InEmperorSuccessionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_LockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Owner_PartyManager_GetTemporaryLeaveVariableStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetSlotEquipByPartyNumber(const int32 InPartyNum, const EG01InventoryItemEquiomentType InEquipmentType, FG01InventoryItemStruct& OutEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetSimulationStatus(const FG01CharacterID& InCharacterId, bool IsMinusWeight, const TArray<FName>& InEquipList, bool& OutExist, FG01CharaStatus& OutCharaStatus, FG01ItemArmorDataStruct& OutArmorData, FG01ItemShieldDataStruct& OutShieldData, int32& OutCommandSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetNameText(const FG01CharacterID& InCharacterId, FText& OutNameTextID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetEquipByPartyNumber(const int32 InPartyNum, TArray<FG01InventoryItemStruct>& OutEquipList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetEmperorSuccessionType(EG01EmperorSuccessionType& OutSuccessionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetDefaultStatusNonParty(const FG01CharacterID& InCharacterId, FG01CharaStatus& OutCharaStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetDefaultStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01CharaStatus& OutCharaStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetDefaultSpellLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SpellLevel& OutSpellLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetDefaultSkillLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SkillLevel& OutSkillLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetCurrentStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01CharaStatus& OutCharaStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetCurrentSpellLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SpellLevel& OutSpellLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetCurrentSkillLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SkillLevel& OutSkillLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetClassID(const FG01CharacterID& InCharacterId, FG01CharaClassID& OutClassID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetCharacterIDList(TArray<FG01CharacterID>& OutCharacterIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetCharacterID(int32 InPartyIndex, FG01CharacterID& OutCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_GetArmorStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01ItemArmorDataStruct& OutArmorData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_CheckUnlockEmperorSuccession(bool& OutIsUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_CheckPartySuccession(const EG01EmperorSuccessionType InSuccessionType, bool& OutIsPartySuccession);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_PartyManager_CheckMeetConditionsOfLastEmperor(bool& OutIsMeet);
    
};

