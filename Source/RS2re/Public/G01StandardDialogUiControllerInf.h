#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01DialogCooperationEnum.h"
#include "EG01DialogSoundTypeEnum.h"
#include "EG01SaveLoadSevenHeroesType.h"
#include "EG01SpecialAcquiredEnum.h"
#include "G01StandardDialogUiControllerInf.generated.h"

class UAccessorActorComponentBase;
class UAppUserWidget;
class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01StandardDialogUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01StandardDialogUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestThroneDialog(UAccessorActorComponentBase* InRequestAccessor, FName InInstitutionID, const FText& InExplanation, int32 InTotalPrice, const TSoftObjectPtr<UTexture2D>& InArtsIconTexture, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestTeacherDialog(UAccessorActorComponentBase* InRequestAccessor, const FText& InItemNameText, const FText& InCaptionExplanationText, const FText& InExplanationText, const TSoftObjectPtr<UTexture2D>& InIconTexture, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestSpecialAcquired(UAccessorActorComponentBase* InRequestAccessor, FName InArtsID, EG01SpecialAcquiredEnum InType, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestSnatchDialog(UAccessorActorComponentBase* InRequestAccessor, FName InItemID, const FText& InText, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestShopDialog(UAccessorActorComponentBase* InRequestAccessor, FName InItemID, int32 InItemCount, const FText& InText, int32 InTotalPrice, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestSelectItemNumberDialog(UAccessorActorComponentBase* InRequestAccessor, FName InItemID, int32 InMaxNumber, FName InDialogTextID, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestOkDialogWithTextID(UAccessorActorComponentBase* InRequestAccessor, FName InDialogTextID, FName InYesButtonTextID, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestOkDialogWithText(UAccessorActorComponentBase* InRequestAccessor, const FText& InText, FName InYesButtonTextID, bool IsExpansionMessage, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestMoneyDialog(UAccessorActorComponentBase* InRequestAccessor, int32 InMoney, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestMasterAbilityDialog(UAccessorActorComponentBase* InRequestAccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestItemDialog(UAccessorActorComponentBase* InRequestAccessor, FName InItemID, int32 InItemCount, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestImperialExam(UAccessorActorComponentBase* InRequestAccessor, const FText& ExamName, const FText& InExplanation, const FText& InTotalPrice, const FText& InPriceText, const TSoftObjectPtr<UTexture2D>& InIconTexture, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestImperialCrownDialog(UAccessorActorComponentBase* InRequestAccessor, int32 InImperialCrown, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestFormationDialog(UAccessorActorComponentBase* InRequestAccessor, FName InFormationId, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestFinishedEquipmentDialog(UAccessorActorComponentBase* InRequestAccessor, FName InItemID, const FText& InInformationText, const FText& Status1Name, const FText& Status1Value, bool InIsPercentage, const FText& Status2Name, const FText& Status2Value, const FText& ExplanationText, const FText& InButtonText, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestFinishDevelopSpellDialog(UAccessorActorComponentBase* InRequestAccessor, const TSoftObjectPtr<UTexture2D>& InSpellIconTexture, const FText& InDevelopNameText, const FText& InExplanationText, const FText& InScopeText, const FText& InRangeText, const FText& InHeadLineText, FName InArtsID, int32 InPower, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestDialogWithTextID(UAccessorActorComponentBase* InRequestAccessor, FName InTextID, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestDialogWithText(UAccessorActorComponentBase* InRequestAccessor, const FText& InText, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestDevelopSpellDialog(UAccessorActorComponentBase* InRequestAccessor, const FText& InDevelopNameText, const FText& InWarningDevelopText, const TSoftObjectPtr<UTexture2D>& InIconTexture, const TSoftObjectPtr<UTexture2D>& InIconSubTexture, int32 InTotalPrice, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestDestoryTurnDialog(UAccessorActorComponentBase* InRequestAccessor, EG01SaveLoadSevenHeroesType HerosType, const int32& InTurn, bool InIsRegulationTrunDestory, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestCreateEquipmentDialog(UAccessorActorComponentBase* InRequestAccessor, FName InItemID, int32 InItemLevel, const FText& InText, int32 InTotalPrice, const TArray<UAppUserWidget*>& InCraftParts, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestCooperationDialog(UAccessorActorComponentBase* InRequestAccessor, EG01DialogCooperationEnum DialogType, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestAutoSaveDialog(UAccessorActorComponentBase* InRequestAccessor, const FText& InTopText, const FText& InTextExplanation, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestArtsSealDialog(UAccessorActorComponentBase* InRequestAccessor, bool InIsVisibleDojo, const FText& InArtsName, const TSoftObjectPtr<UTexture2D>& InArtsIconTexture, const TSoftObjectPtr<UTexture2D>& InSubArtsIconTexture, const FText& InWarningText, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestAbilitySnatchDialog(UAccessorActorComponentBase* InRequestAccessor, FName InItemID, const TSoftObjectPtr<UTexture2D>& InArtsIconTexture, const FText& InText, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestAbilityFunctionReleaseDialog(UAccessorActorComponentBase* InRequestAccessor, bool InIsUnlockAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_RequestAbilityAcquiredDialog(UAccessorActorComponentBase* InRequestAccessor, FName AbiliryID, EG01DialogSoundTypeEnum InSEType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01StandardDialogUiController_IsUsed(bool& OutIsUsed);
    
};

