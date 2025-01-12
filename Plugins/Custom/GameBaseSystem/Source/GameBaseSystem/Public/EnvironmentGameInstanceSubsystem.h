#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnEnvironmentSettingDelegate.h"
#include "EnvironmentGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UEnvironmentGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnvironmentSetting MOnEnvironmentSetting;
    
public:
    UEnvironmentGameInstanceSubsystem();

};

