#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VisualActorParamDataAssetBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorParamDataAssetBase -FallbackName=VisualActorParamDataAssetBase
#include "EG01MenuAnimationEnum.h"
#include "G01MenuVisualDataAsset.generated.h"

class UAnimMontage;
class UAnimSequence;
class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01MenuVisualDataAsset : public UVisualActorParamDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MThroneSitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MMusicAppreciationSitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MExamCheckAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MExamFinishAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MExamThinkAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MExamWriteAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MPartyFormationWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MEmperorChoiceWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MSelectLastEmperorWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MSelectLastEmperorSignaturePoseAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MChronologyAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MBattleSealedWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MMenuTopWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MStatusWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MTechniqueWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MEquipWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MSwordWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MGreatSwordWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MShortSwordWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MAxeWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MClubWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MSpearWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MBowWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MKnuckleWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MShieldWaitAnimMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MAbilityWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MFormationWaitAnimSequenceSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MThroneTopMenuCameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MThroneTopMenuCameraRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MThroneDevelopMenuCameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MThroneDevelopMenuCameraRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MThroneAbdicationMenuCameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MThroneAbdicationMenuCameraRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MExamCameraPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MExamCameraRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MMenuCharacterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMenuCharacterZoomMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMenuCharacterZoomMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MMusicCharacterPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MMusicCharacterRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MThroneCharacterPositionOffset;
    
    UG01MenuVisualDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetThroneSitAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetTechniqueWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetSwordWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetStatusWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetSpearWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetShortSwordWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetShieldWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetSelectLastEmperorWaitAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetSelectLastEmperorSignaturePoseAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetPartyFormationWaitAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetMusicAppreciationSitAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetMenuTopWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetKnuckleWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetGreatSwordWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetFormationWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetExamWriteAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetExamThinkAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetExamFinishAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetExamCheckAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetEquipWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetEnemyWaitAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetEmperorChoiceWaitAnimationSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetClubWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetChronologyAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetBowWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetBattleSealedWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetAxeWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UObject> GetAnimMontageSoftObjectPtr(EG01MenuAnimationEnum InAnimationEnum, bool& ReIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimSequence> GetAbilityWaitAnimMontageSoftObjectPtr(bool& ReIsValid);
    
};

