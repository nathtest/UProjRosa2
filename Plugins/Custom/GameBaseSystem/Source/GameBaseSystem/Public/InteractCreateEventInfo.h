#pragma once
#include "CoreMinimal.h"
#include "EventArguments.h"
#include "InteractCreateEventInfo.generated.h"

class AEventObjectBase;
class UInteractReceiverComponent;

USTRUCT(BlueprintType)
struct FInteractCreateEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventObjectBase* MEventObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventArguments MEventArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractReceiverComponent* MReceiveCompo;
    
    GAMEBASESYSTEM_API FInteractCreateEventInfo();
};

