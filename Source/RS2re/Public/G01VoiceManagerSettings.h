#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01VoiceLanguageID.h"
#include "G01VoiceManagerSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UG01VoiceManagerSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VoiceLanguageID DefaultVoiceLanguageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LanguageTable;
    
    UG01VoiceManagerSettings();

    UFUNCTION(BlueprintCallable)
    void Generate();
    
};

