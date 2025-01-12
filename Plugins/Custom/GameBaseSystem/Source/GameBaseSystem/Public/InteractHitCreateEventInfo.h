#pragma once
#include "CoreMinimal.h"
#include "EventArguments.h"
#include "InteractHitCreateEventInfo.generated.h"

class AEventObjectBase;
class UInteractReceiverComponent;

USTRUCT(BlueprintType)
struct FInteractHitCreateEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventArguments MEventArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsEndOverlapForceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractReceiverComponent* MReceiveCompo;
    
    GAMEBASESYSTEM_API FInteractHitCreateEventInfo();
};

