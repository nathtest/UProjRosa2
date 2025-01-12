#pragma once
#include "CoreMinimal.h"
#include "EventArguments.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EventArguments -FallbackName=EventArguments
#include "Templates/SubclassOf.h"
#include "G01SeqNotifyEventParams.generated.h"

class AG01EventObjectFlowBase;

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqNotifyEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01EventObjectFlowBase> EventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventArguments Args;
    
    FG01SeqNotifyEventParams();
};

