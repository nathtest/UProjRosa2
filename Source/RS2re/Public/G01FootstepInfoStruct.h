#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADBankSoundEntry.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADBankSoundEntry -FallbackName=SQEXSEADBankSoundEntry
#include "G01FootstepInfoStruct.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct RS2RE_API FG01FootstepInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADBankSoundEntry SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EffectData;
    
    FG01FootstepInfoStruct();
};

