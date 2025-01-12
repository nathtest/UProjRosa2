#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "RS2reGameSetting.generated.h"

class UG01BattleSubsystemHelper;
class UG01GamePlayDataSubsystemHelper;
class UG01GameSystemDataSubsystemHelper;
class UG01PartySubsystemHelper;
class UG01SlomoSubsystemHelper;
class UG01TextSubsystemHelper;
class UG01TutorialSubsystemHelper;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RS2RE_API URS2reGameSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01PartySubsystemHelper> PartySubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01GamePlayDataSubsystemHelper> GamePlayDataSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01SlomoSubsystemHelper> SlomoSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01GameSystemDataSubsystemHelper> GameSystemDataSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01TutorialSubsystemHelper> TutorialSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01TextSubsystemHelper> TextSubsystemHelperClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01BattleSubsystemHelper> BattleSubsystemHelperClass;
    
    URS2reGameSetting();

};

