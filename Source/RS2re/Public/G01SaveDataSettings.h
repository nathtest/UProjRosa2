#pragma once
#include "CoreMinimal.h"
#include "ESaveSlotCategory.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ESaveSlotCategory -FallbackName=ESaveSlotCategory
#include "EScreenTransitionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EScreenTransitionType -FallbackName=EScreenTransitionType
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "SaveDataSettings.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataSettings -FallbackName=SaveDataSettings
#include "G01SaveTime.h"
#include "Templates/SubclassOf.h"
#include "G01SaveDataSettings.generated.h"

class UG01SaveDataSubsystemFeatureBase;

UCLASS(Blueprintable)
class RS2RE_API UG01SaveDataSettings : public USaveDataSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SaveTime IntervalByRoomChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SaveTime IntervalByAutoSaveCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSaveDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfoView RestoreLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESaveSlotCategory> NeedRestoreCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenTransitionType ScreenTransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UG01SaveDataSubsystemFeatureBase>> FeatureClasses;
    
    UG01SaveDataSettings();

};

