#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VAPartsKey -FallbackName=VAPartsKey
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorCommonSettings -FallbackName=VisualActorCommonSettings
#include "G01VAAnimReplaceSettings.h"
#include "G01VAWeaponParams.h"
#include "Templates/SubclassOf.h"
#include "VAPartsKey.h"
#include "VisualActorCommonSettings.h"
#include "G01VisualActorCommonSettings.generated.h"

class AG01CharacterVisualActor;

UCLASS(Blueprintable)
class RS2RE_API UG01VisualActorCommonSettings : public UVisualActorCommonSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01CharacterVisualActor> HumanBaseVisualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAPartsKey HeadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAAnimReplaceSettings AnimReplaceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01VAWeaponParams> WeaponParams;
    
public:
    UG01VisualActorCommonSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AG01CharacterVisualActor> GetStandardSoftClass_Human() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AG01CharacterVisualActor> GetStandardClass_Human() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVAPartsKey GetPartsKey_Head() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01VAAnimReplaceSettings GetAnimReplaceSettings() const;
    
};

