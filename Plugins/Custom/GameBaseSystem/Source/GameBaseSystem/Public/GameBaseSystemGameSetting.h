#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ERegionType.h"
#include "Templates/SubclassOf.h"
#include "GameBaseSystemGameSetting.generated.h"

class UAchievementSubsystemHelper;
class UActivitySubsystemHelper;
class UAppNotificationSubsystemHelper;
class UFlagSubsystemHelper;
class UGameBootSubsystemHelper;
class UGamePlayDataSubsystemHelper;
class UGameSystemDataSubsystemHelper;
class UKeyConfigSubsystemHelper;
class ULevelMoveSubsystemHelper;
class ULoadScreenSubsystemHelper;
class UPlatformSubsystemHelper;
class UQuestSubsystemHelper;
class USaveDataSubsystemHelper;
class UVisualActorHelper;
class UWidgetSubsystemHelper;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class GAMEBASESYSTEM_API UGameBaseSystemGameSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameBootSubsystemHelper> GameBootSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetSubsystemHelper> WidgetSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGamePlayDataSubsystemHelper> GamePlayDataSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameSystemDataSubsystemHelper> GameSystemDataSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadScreenSubsystemHelper> LoadScreenSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULevelMoveSubsystemHelper> LevelMoveSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlatformSubsystemHelper> PlatformSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKeyConfigSubsystemHelper> KeyConfigSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAchievementSubsystemHelper> AchievementSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActivitySubsystemHelper> ActivitySubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAppNotificationSubsystemHelper> AppNotificationSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USaveDataSubsystemHelper> SaveDataSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFlagSubsystemHelper> FlagSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestSubsystemHelper> QuestSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVisualActorHelper> VisualActorHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableKeyboardInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableMouseInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERegionType RegionType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsTrial;
    
public:
    UGameBaseSystemGameSetting();

};

