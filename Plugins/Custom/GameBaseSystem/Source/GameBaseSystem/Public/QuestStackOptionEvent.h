#pragma once
#include "CoreMinimal.h"
#include "EventArguments.h"
#include "EventEndParams.h"
#include "QuestStackOptionEvent.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct FQuestStackOptionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsWaitEventEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MOrderEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventArguments MEventArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventEndParams EndParams;
    
    GAMEBASESYSTEM_API FQuestStackOptionEvent();
};

