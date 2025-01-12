#pragma once
#include "CoreMinimal.h"
#include "CameraShakeID.h"
#include "G01SeqNotifyCameraShake.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraShakeID CameraShakeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsWaitEnd;
    
    GAMEBASESYSTEM_API FG01SeqNotifyCameraShake();
};

