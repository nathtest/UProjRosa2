#pragma once
#include "CoreMinimal.h"
#include "InteractColliderTag.h"
#include "ReceiveInteractEventInfo.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct FReceiveInteractEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractColliderTag MColliderTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MRequestEventObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsEndOverlapEventForceEnd;
    
    GAMEBASESYSTEM_API FReceiveInteractEventInfo();
};

