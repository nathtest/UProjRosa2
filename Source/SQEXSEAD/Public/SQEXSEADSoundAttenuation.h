#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADSoundAttenuationSettings.h"
#include "SQEXSEADSoundAttenuation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SQEXSEAD_API USQEXSEADSoundAttenuation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSoundAttenuationSettings Attenuation;
    
    USQEXSEADSoundAttenuation();

};

