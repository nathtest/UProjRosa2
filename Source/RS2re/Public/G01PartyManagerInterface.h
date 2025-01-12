#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleExplicitCommandMementoStruct.h"
#include "G01CharaClassID.h"
#include "G01CharaStatus.h"
#include "G01CharacterID.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01PartyManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class UG01PartyManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01PartyManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PartyManager_UnlockAbdication();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PartyManager_SetExplicitCommandMemento(const TMap<FG01CharacterID, FG01BattleExplicitCommandMementoStruct>& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PartyManager_OverrideStatus(const FG01CharacterID& InCharacterId, const FG01CharaStatus& InStatus, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PartyManager_GetExplicitCommandMemento(TMap<FG01CharacterID, FG01BattleExplicitCommandMementoStruct>& OutCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01CharacterID Inf_PartyManager_GetCurrentCharaIDbyClassID(const FG01CharaClassID& InClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PartyManager_ExecuteDarkStoneRingProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_PartyManager_ContainsByClassID(const FG01CharaClassID& InClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_PartyManager_ContainsByCharaID(const FG01CharacterID& InCharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_PartyManager_CheckAbdicationPossible(bool& OutResult);
    
};

