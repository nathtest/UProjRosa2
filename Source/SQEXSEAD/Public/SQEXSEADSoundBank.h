#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADModeInfo.h"
#include "SQEXSEADSectionInfo.h"
#include "SQEXSEADSoundInfo.h"
#include "SQEXSEADStreamingBufferSettings.h"
#include "SQEXSEADSoundBank.generated.h"

class USQEXSEADSoundAttenuation;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USQEXSEADSoundBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStreaming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADStreamingBufferSettings StreamingBufferSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADSoundInfo> SoundInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEXSEADSectionInfo> SectionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEXSEADModeInfo> ModeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMAGIAsset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundAttenuation* BankOverrideAttenuation;
    
    USQEXSEADSoundBank();

};

