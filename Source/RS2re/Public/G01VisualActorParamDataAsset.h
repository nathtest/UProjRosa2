#pragma once
#include "CoreMinimal.h"
#include "VisualActorParamDataAsset.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorParamDataAsset -FallbackName=VisualActorParamDataAsset
#include "EG01VAIkPartType.h"
#include "G01VAIkCommonSettings.h"
#include "G01VAIkSettings.h"
#include "G01VAParamWeaponCustomData.h"
#include "G01VAParamWeaponCustomDataAll.h"
#include "G01VisualActorFacialDataAll.h"
#include "G01VisualActorParamDataAsset.generated.h"

class UG01FootstepDataAsset;

UCLASS(Blueprintable)
class RS2RE_API UG01VisualActorParamDataAsset : public UVisualActorParamDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialDataAll FacialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAParamWeaponCustomDataAll WeaponCustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAParamWeaponCustomDataAll BattleWeaponCustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAIkCommonSettings IkCommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool IsOverrideBattleIkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EG01VAIkPartType, FG01VAIkSettings> IkSettingsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EG01VAIkPartType, FG01VAIkSettings> BattleIkSettingsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UG01FootstepDataAsset> FootstepDataAsset;
    
public:
    UG01VisualActorParamDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01VAParamWeaponCustomDataAll GetWeaponCustomData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01VAIkSettings GetIkSettings(EG01VAIkPartType InType, FName InMotionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01VAIkCommonSettings GetIkCommonSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01VisualActorFacialDataAll GetFacialData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01VAParamWeaponCustomData FindWeaponCustomData(FName InWeaponType, FName InMotionType) const;
    
    UFUNCTION(BlueprintCallable)
    void CopytoBattleIkSettings();
    
};

