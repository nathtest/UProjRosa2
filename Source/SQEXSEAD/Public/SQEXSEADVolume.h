#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "3DSoundOcclusionInfo.h"
#include "AmbientSoundInfo.h"
#include "AmbientSoundOcclusionInfo.h"
#include "EffectPresetPackInfo.h"
#include "SQEXSEADVolume.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API ASQEXSEADVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSimplifiedEncompassesPointCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbientSoundInfo AmbientSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectPresetPackInfo EffectPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbientSoundOcclusionInfo AmbientSoundOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    F3DSoundOcclusionInfo SpatialSoundOcclusion;
    
    ASQEXSEADVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPriority(float NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectPreset(const FEffectPresetPackInfo& NewEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbientSound(const FAmbientSoundInfo& NewAmbientSound);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
};

