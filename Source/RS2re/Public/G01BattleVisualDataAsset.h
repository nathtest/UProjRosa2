#pragma once
#include "CoreMinimal.h"
#include "VisualActorParamDataAssetBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorParamDataAssetBase -FallbackName=VisualActorParamDataAssetBase
#include "G01BattleVoiceDataKeyStruct.h"
#include "G01CharacterBattleMontagePerAction.h"
#include "G01CharacterBattleMontagePerLearn.h"
#include "G01CharacterBattleMontagePerReaction.h"
#include "G01CharacterBattleMontagePerResult.h"
#include "G01BattleVisualDataAsset.generated.h"

class AG01CharacterVisualActor;
class UAnimMontage;
class UAnimSequence;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleVisualDataAsset : public UVisualActorParamDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01CharacterVisualActor> MVisualActorSoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MWaitAnimSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> CommandWaitAnimSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> DamageWaitAnimSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MAilmentWaitAnimSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> MFaintWaitAnimSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimSequence>> MWaitGestureAnimSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterBattleMontagePerReaction MReactionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> MCommandMontageSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterBattleMontagePerAction MCommandWaitMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterBattleMontagePerResult MResultWinMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterBattleMontagePerLearn LearnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleVoiceDataKeyStruct> BattleVoiceDataIdMap;
    
public:
    UG01BattleVisualDataAsset();

    UFUNCTION(BlueprintCallable)
    void WinMontageRetarget();
    
    UFUNCTION(BlueprintCallable)
    void WaitGestureAnimationRetarget();
    
    UFUNCTION(BlueprintCallable)
    void WaitAnimationRetarget();
    
    UFUNCTION(BlueprintCallable)
    void SetBattleVoiceDataIdMap(const TMap<FName, FG01BattleVoiceDataKeyStruct>& InDataIdMap);
    
    UFUNCTION(BlueprintCallable)
    void ReactionMontageRetarget();
    
    UFUNCTION(BlueprintCallable)
    void LearnMontageRetarget();
    
    UFUNCTION(BlueprintCallable)
    void CommandMontageRetarget();
    
};

