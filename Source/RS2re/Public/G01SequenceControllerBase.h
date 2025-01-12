#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameLevelManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameLevelManagerObserverInf -FallbackName=GameLevelManagerObserverInf
#include "SequenceController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceController -FallbackName=SequenceController
#include "EG01SeqActorCollectRenderType.h"
#include "EG01SeqControllerPlayType.h"
#include "G01BattleManagerObserverInf.h"
#include "G01EnvPresetDataAssetID.h"
#include "G01SeqActorCollectResult.h"
#include "G01SeqPickCameraActiveInfo.h"
#include "G01SeqPlayArg_BattleArts.h"
#include "G01SeqPlayArg_BattleAttackInfo.h"
#include "G01SeqPlayArg_BattleEncount.h"
#include "G01SeqPlayArg_BattleFormation.h"
#include "G01SeqPlayArg_BattleLoadArtsInfo.h"
#include "G01SeqPlayArguments.h"
#include "Templates/SubclassOf.h"
#include "G01SequenceControllerBase.generated.h"

class AActor;
class UG01EnvironmentManagerAccessor;
class UG01RoomManagerAccessor;
class UObject;

UCLASS(Blueprintable)
class RS2RE_API AG01SequenceControllerBase : public ASequenceController, public IG01BattleManagerObserverInf, public IGameLevelManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* RoomManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01EnvironmentManagerAccessor* EnvironmentManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<EG01SeqActorCollectRenderType> MActorOverlapPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* StandardVisualActor_Human;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CameraLocationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> BgmVolumeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedBgmVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01SeqControllerPlayType PlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SeqPlayArguments MPlayArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqPickCameraActiveInfo> MCameraActiveInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MCamActiveInfoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* MActiveCameraObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MMaxSizeTargetSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01EnvPresetDataAssetID CachedEnvPresetID;
    
public:
    AG01SequenceControllerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDestroyVolumeOwner(AActor* InOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseBinderArtsNameCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCacheEnvironmentPresetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetStandardVisualActor_Human() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01SeqControllerPlayType GetPlayType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqPlayArguments GetG01PlayArguments() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetPlayType(EG01SeqControllerPlayType InType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetBgmVolume(AActor* InOwner, float InVolume, float InFadeInTime);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetBattleLoadArtsInfo(FG01SeqPlayArg_BattleLoadArtsInfo InLoadArtsData);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetBattleFormationInfo(FG01SeqPlayArg_BattleFormation InFormationInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetBattleEncountInfo(FG01SeqPlayArg_BattleEncount InEncountInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetBattleAttackMissHitInfo(UPARAM(Ref) TMap<int32, bool>& InMissHitArray);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetBattleAttackInfo(FG01SeqPlayArg_BattleAttackInfo InAttackInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetBattleArtsInfo(FG01SeqPlayArg_BattleArts InArtsData);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_GetOverlappingActorsByRenderType(TSubclassOf<AActor> InClassFilter, FG01SeqActorCollectResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Cmd_SA_GetBgmVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Cmd_SA_GetBgmFadeInTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqPlayArg_BattleFormation Cmd_SA_GetBattleFormationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqPlayArg_BattleEncount Cmd_SA_GetBattleEncountInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqPlayArg_BattleArts Cmd_SA_GetBattleArtsInfo() const;
    

    // Fix for true pure virtual functions not being implemented
};

