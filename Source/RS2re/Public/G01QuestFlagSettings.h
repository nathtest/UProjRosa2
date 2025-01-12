#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01BattleFlagSettingInfo.h"
#include "G01QuestFlagSettings.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestFlagSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleFlagSettingInfo MBattleFlagSettings;
    
public:
    UG01QuestFlagSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01BattleFlagSettingInfo GetBattleFlagSettings() const;
    
};

