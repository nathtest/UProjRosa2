#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01VACharacterWeaponSettingsRow.h"
#include "G01VisualActorCharacterSettings.generated.h"

class UAnimSequence;
class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UG01VisualActorCharacterSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterWeaponSettingsTable;
    
public:
    UG01VisualActorCharacterSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponPose(const TSoftObjectPtr<UAnimSequence>& InAnimPath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindCharaWeaponSettings(FName InWeaponCategory, bool& OutIsFound, FG01VACharacterWeaponSettingsRow& OutRow) const;
    
};

