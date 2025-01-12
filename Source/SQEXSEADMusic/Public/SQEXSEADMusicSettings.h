#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADMusicSettings.generated.h"

class USQEXSEADMusicDataAssets;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SQEXSEADMUSIC_API USQEXSEADMusicSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMusicSubsystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USQEXSEADMusicDataAssets> MusicDataAsset;
    
    USQEXSEADMusicSettings();

};

