#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAudioPlayOnceStateControlKey.h"
#include "SQEXSEADAudioPlayOnceStateControlPayload.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADAudioPlayOnceStateControlPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEXSEADAudioPlayOnceStateControlKey CotrolKey;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADAudioPlayOnceStateControlPayload();
};

