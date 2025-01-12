#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqCategoryView -FallbackName=SeqCategoryView
#include "SequencerManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerManager -FallbackName=SequencerManager
#include "G01BattleManagerObserverInf.h"
#include "G01SeqCameraPatternShareInfo.h"
#include "G01SeqNotifyBgmVolumeStack.h"
#include "G01SequencerManagerInterface.h"
#include "G01SequencerManager.generated.h"

class AG01SequenceControllerBase;
class UDataTable;
class UG01BgmLayerHandleObject;
class UG01BgmManagerAccessor;
class UG01LevelMoveManagerAccessor;
class UG01LoadWaitUiControllerAccessor;
class UG01SequenceSettings;

UCLASS(Blueprintable)
class RS2RE_API AG01SequencerManager : public ASequencerManager, public IG01SequencerManagerInterface, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01BgmManagerAccessor* BgmManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LoadWaitUiControllerAccessor* LoadWaitUiControllerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LevelMoveManagerAccessor* LevelMoveManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SeqCameraPatternShareInfo MCameraPatternShareInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BgmVolumePresetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01BgmLayerHandleObject* BgmLayerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqNotifyBgmVolumeStack> BgmPresetStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDirtyBgmVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AG01SequenceControllerBase*> BgmUseControllers;
    
public:
    AG01SequencerManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseableCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventSceneCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleArtsEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleArtsCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01SequenceSettings* GetG01SequenceSettings() const;
    

    // Fix for true pure virtual functions not being implemented
};

