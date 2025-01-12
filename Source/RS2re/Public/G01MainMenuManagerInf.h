#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "EG01BattleArtsType.h"
#include "EG01LibraryTutorialCategoryEnum.h"
#include "EMainMenuTabType.h"
#include "EMainMenuType.h"
#include "G01CharacterID.h"
#include "G01MainMenuManagerInf.generated.h"

class AVisualActor;
class UAnimMontage;
class UAnimSequence;
class UG01MenuVisualDataAsset;
class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_TecherClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_StopMontage(AVisualActor* InVisualActor, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_StartWarmUp(AVisualActor* InVisualActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_ShortcutOpen(EMainMenuType InTabType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_SetVisualActorVisibility(AVisualActor* InVisualActor, bool InIsVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_SetNewIconFlag(EMainMenuType InMainMenuType, FName ProperName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_SetIsEmperorSit(bool InIsSit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_SetActiveInput(bool OutIsActiveInput);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_ResetMenuAnimInstanceDynamics(AVisualActor* InVisualActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_RegistMenuVisualActorEndDither(FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_RegistMenuVisualActorDither(FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_PressingForUpDown(bool& OutIsPressing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_PressingForLeftRight(bool& OutIsPressing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_PressingForL1R1(bool& OutIsPressing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_PlayAnimationSequence(AVisualActor* InVisualActor, UAnimSequence* InAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_PlayAnimationMontage(AVisualActor* InVisualActor, UAnimMontage* InAnimation, const FName InStartingSection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OpenTeacherMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnYButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnXButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnTouchPad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnStartButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnRStickUpDown(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnRStickLeftRight(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnR3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnR2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnPreItemLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnNextItemRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnL2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnL1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsTechniqueArtsCategoryNewIconFlag(FName InCharaID, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsNewIconFlag(EMainMenuType InMainMenuType, FName InProperName, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsLibraryTutorialCategoryNewIconFlag(EG01LibraryTutorialCategoryEnum InTutorialType, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsLibrarySpellCategoryNewIconFlag(const TArray<EG01BattleArtsType>& InSpellType, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsLibrarySkillCategoryNewIconFlag(EG01BattleArtsType InSkillType, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsLibraryItemCategoryNewIconFlag(int32 InItemType, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsLibraryFathomCategoryNewIconFlag(EG01BattleArtsType InFathomType, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsLibraryEnemyCategoryNewIconFlag(const TArray<FName>& InEnemyIdList, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsItemCategoryNewIconFlag(int32 InItemType, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsEmperorSit(bool& IsSit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_IsCategoryNewIconFlag(EMainMenuType InMainMenuType, bool& IsNew);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetPartyCharacterNum(int32& OutCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetPartyCharacterIds(TArray<FG01CharacterID>& OutCharacterIds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetPartyCharacterId(const int32 InPartyIndex, FG01CharacterID& OutCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetMenuVisualDataLoadEnd(bool& OutIsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetMenuVisualDataAsset(const FG01CharacterID InCharacterId, UG01MenuVisualDataAsset*& OutVisualDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetMenuVisualActor(const FG01CharacterID InCharacterId, AVisualActor*& OutVisualActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetMenuCharaVisualDataLoadEnd(const FG01CharacterID InCharacterId, bool& OutIsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetMenuCategoryIconTexture(EMainMenuTabType InMainMenuType, UTexture2D*& OutIconTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetMainMenuFlag(FFlagIDListViewStruct InFlagID, bool& IsValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_GetEmperorSitMontage(UAnimMontage*& OutThroneSitAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_FindSpellLibraryFlag(const FName InArtsID, bool& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_FindSkillLibraryFlag(const FName InArtsID, bool& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_FindFathomLibraryFlag(const FName InArtsID, bool& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_DebugOpenLibraryFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_ConvertTextIDSpecifyString(const FName InTextID, const TArray<FString>& InContentString, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_ConvertTextID(const FName InTextID, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuManager_ChangeMenu(EMainMenuType InTabType);
    
};

